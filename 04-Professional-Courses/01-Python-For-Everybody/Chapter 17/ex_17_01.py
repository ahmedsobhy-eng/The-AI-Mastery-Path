import sqlite3
import ssl
import urllib.request,urllib.parse
import json
serviceurl = 'https://py4e-data.dr-chuck.net/opengeo?'
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE
conn=sqlite3.connect("tech_giants_map.sqlite")
cur=conn.cursor()
cur.execute('''CREATE TABLE IF NOT EXISTS TechGiants(Address TEXT,Geodata TEXT)
''')
print("Step 1 Done: Database and Table are ready!")
fh = open("tech_giants.data")
count=0
for line in fh :
       if count >=100: break
       address=line.strip()
       cur.execute('''SELECT Geodata FROM TechGiants WHERE Address=?      ''',(memoryview(address.encode()),))
       try:
             data= cur.fetchone()[0]
             print("Found in database - Skipping...")
             continue
       except:
             pass
       parms=dict()
       parms['q']=address
       url=serviceurl+urllib.parse.urlencode(parms)
       print('Retrieving', url)
       try:
             uh=urllib.request.urlopen(url,context=ctx)
             data=uh.read().decode()
             print("Retrived",len(data),"Characters",data[:20].replace('\n'," "))
       except Exception as e:
             print("Faild to retrive",e)
             continue
       cur.execute('''INSERT INTO TechGiants (Address,Geodata)VALUES(?,?)
''',(memoryview(address.encode()),memoryview(data.encode())))
       conn.commit()
       import time
       time.sleep(5)
       count=count+1
