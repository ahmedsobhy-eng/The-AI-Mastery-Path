#this is a program asking the user about  hours and rate per hour 
#. Pay the hourly rate for the hours up to
# 40 and 1.5 times the hourly rate for all hours worked above 40 hours
h=input("Enter your hours:")
r=input("Enter your rate:")
try: 
    h=float(h)
    r=float(r)
except:
    print('Enter a numbers not a letters')
    quit()
if h <=40 :
    pay= h*r
    print(pay)
else:
    pay=(40*r)+((h-40)*(r*1.5))
print(pay)
    
    




