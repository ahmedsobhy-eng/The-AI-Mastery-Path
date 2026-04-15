import urllib.request,json
import urllib.parse
url=input("Enter location: ")
data=urllib.request.urlopen(url).read().decode()
print("Retrieving ",url)
print("Retrieved",len(data),"characters")
js=json.loads(data)
total_sum=0
total_count=0
for item in js["comments"]:
        value=item['count']
        total_sum=total_sum+int(value)
        total_count=total_count+1
print("Count: ",total_count)
print("Sum: ",total_sum)

