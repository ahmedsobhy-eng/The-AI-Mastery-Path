class member:
       def __init__(self,nam):
              self.name=nam
              self.memberlogin=0
              print(self.name,"constructed")
       def login(self):
              self.memberlogin=self.memberlogin+1
              print(self.name,"Counts",self.memberlogin)
class training(member):
       def __init__(self, nam):
              super().__init__(nam)
              self.calories=0
       def workout (self,burn):
              self.calories=self.calories+burn
              print(f"Name : {self.name}, Burned: {burn} ,Calories total: {self.calories}")

me=training("Ahmed")
me.login()
me.workout(500)

                       
