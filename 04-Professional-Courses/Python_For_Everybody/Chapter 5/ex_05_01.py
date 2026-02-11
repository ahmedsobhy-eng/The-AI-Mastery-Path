largest = None
smallest = None

while True:
    num = input("Enter a number: ")
    if num =="Done":
        break
    try:
        fval=int(num)
    except:
        print("Invalid input")
        continue
    if largest is None :
        largest = fval
        smallest = fval
      
    elif largest < fval:
        largest = fval
    elif smallest > fval:
        smallest=fval
        
print("Maximum is", largest)
print("Minimum is", smallest)