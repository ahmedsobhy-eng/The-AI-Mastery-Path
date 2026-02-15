name = input("Enter file:")
if len(name) < 1:
    name = "mbox-short.txt"
handle = open(name)
counts=dict()
for line in handle:
    if  not line.startswith("From "):continue
    words=line.split()
    time=words[5]
    hours=time.split(":")[0]
    counts[hours]=counts.get(hours,0)+1
lst=sorted(counts.items())
for key,val in lst:
    print(key,val)
    