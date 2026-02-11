def pay(h,r):  
       if h<=40:
              pay=h*r
       else:
              pay=(40*r) +((h-40)*(r*1.5))
       return pay
h=input("Enter your Hours:")
h=float(h)
r=input("Enter your rate:")
r=float(r)
p=pay(h,r)
print("Pay",p)