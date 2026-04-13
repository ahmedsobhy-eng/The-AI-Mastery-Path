
fname = input("Enter file name: ")
try:
    fh = open(fname)
except:
    print("enter a vaild file")
    quit()
fh=fh.read()
fh=fh.rstrip()
fhs=fh.upper()
print(fhs)