import xml.etree.ElementTree as ET
import urllib.request
url=input ("Enter location:")
if len(url) <1:
       url="http://py4e-data.dr-chuck.net/comments_2368382.xml"
print("Retrieving ",url)
url1=urllib.request.urlopen(url).read()
print("Retrived",len(url1),"characters")
tree=ET.fromstring(url1)
counts=tree.findall(".//count")
nums= list()
for item in counts:
       value=int(item.text)
       nums.append(value)
print("Count:",len(nums))
print("Sum:",sum(nums))



