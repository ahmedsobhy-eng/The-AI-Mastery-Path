import urllib.request,urllib.parse,urllib.error
from bs4 import BeautifulSoup
url="http://py4e-data.dr-chuck.net/known_by_Raphael.html"
count=7
position=18
for i in range(count):
       html=urllib.request.urlopen(url).read()
       soup=BeautifulSoup(html,"html.parser")
       tags=soup("a")
       target_tag=tags[position-1]
       url=target_tag.get('href',None)
       print("Retrieving:", url)
print("The final name is:", target_tag.text)