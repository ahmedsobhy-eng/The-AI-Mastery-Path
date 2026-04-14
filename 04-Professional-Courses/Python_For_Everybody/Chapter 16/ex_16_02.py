import json
import codecs
import sqlite3
conn=sqlite3.connect("ex_16_01.sqlite")
cur=conn.cursor()
cur.execute("SELECT* FROM Locations")
fhand=codecs.open('Where.js','w',"utf-8")
fhand.write("myData=[\n")
count=0
for row in cur:
       data=row[1].decode()
       try:
              js=json.loads(data)
       except:
              continue
       if  'features' not in js or len(js['features'])==0:
              continue
       try:
              lng=js['features'][0]['geometry']['coordinates'][0]
              lat=js['features'][0]['geometry']['coordinates'][1]
              where=js['features'][0]['properties']['display_name']
              where=where.replace("'","")
              if lat==0 or lng==0:
                     continue
              count=count+1
        
              if count > 1 : fhand.write(",\n")
        
              output = "[" + str(lat) + "," + str(lng) + ", '" + where + "']"

              fhand.write(output)
        
              print(where, lat, lng)
        
       except:
          continue

fhand.write("\n];\n")

cur.close()
fhand.close()

print(count, "records written to where.js")



