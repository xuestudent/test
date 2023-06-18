#面向对象和面像过程
# 面向过程是一件事“该怎么做“，面向对象是一件事“该让谁来做”，
# 然后那个“谁”就是对象，他要怎么做是他自己的事，
# 反正最后一群对象合力能把事做好就行了。
#继承
class Employee:
    def __init__(self,name,id):
        self.name=name
        self.id=id
    def printf(self):
        print(f"员工名字{self.name}   工号{self.id}")

class FulltimeEmployee(Employee):
    def __init__(self,name,id,mothly_salay):
        super().__init__(name,id)
        self.mothly_salay=mothly_salay
    def get_ply(self):
        return self.mothly_salay


class halftimeEmployee(Employee):
    def __init__(self, name, id, day_salay,day):
        super().__init__(name, id)
        self.day_salay=day_salay
        self.day=day
    def get_ply(self):
            return self.day_salay*self.day


zheng=FulltimeEmployee("张三","1001",600)
xue=halftimeEmployee("小薛","1002",100,7)
xue.printf()
zheng.printf()
print(zheng.get_ply())
print(xue.get_ply())
