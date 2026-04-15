import urllib.request
import urllib.parse 
import urllib.error
from bs4 import BeautifulSoup
html=urllib.request.urlopen("http://py4e-data.dr-chuck.net/comments_2368380.html").read()
soup=BeautifulSoup(html,"html.parser")
tags=soup("span")
total_sum=0
for tag in tags:
       number=int(tag.text)
       total_sum=total_sum+number
print(total_sum)