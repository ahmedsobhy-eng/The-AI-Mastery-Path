import re
full_name="ahmed sobhy omar gebril "
name="ahmed"
test=re.search(name,full_name)
if test:
       print("found")
else:
       print("not found")
       
