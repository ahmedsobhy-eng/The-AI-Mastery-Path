
fname = input("Enter file name: ")
fh = open(fname)
count=0
ms=0
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:"):
        continue
    pos=line.find(':')
    po=line[pos+1:]
    po=float(po)
    
    count=count+1
    ms=ms+po
        
    xm=ms/count
print("Average spam confidence:",xm)