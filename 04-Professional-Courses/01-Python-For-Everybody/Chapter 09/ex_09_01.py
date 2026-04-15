name = input("Enter file:")
handle = open(name)
counts=dict()
for line in handle :
   if not line.startswith("From ") :
        continue
   words=line.split()
   email=words[1]
   counts[email]=counts.get(email,0)+1
bigcount=None
bigword=None
for word,count  in counts.items():
    if bigcount is None or count>bigcount:
        bigcount=count
        bigword=word
print(bigword,bigcount)