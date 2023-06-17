#面向对象类的创建
class CuteCart:
    def __init__(self,Cat_name,Cat_age,Cat_color):#类似与c语言的结构体
        self.name = Cat_name
        self.age  = Cat_age
        self.color = Cat_color
cat1=CuteCart("aa",3,"红色")
cat2=CuteCart("bb",2,"绿色")
print(f"第一只猫是{cat1.name}它{cat1.age}岁了，它是{cat1.color}")
print(f"第二只猫是{cat2.name}它{cat2.age}岁了，它是{cat2.color}")
class student:#创建面向对象
    def __init__(self,name,age):
        self.name=name
        self.age=age
        self.score={"语文":0,"数学":0,"英语":0}
    def set_score(self,Name,score):#定义方法  设置成绩
        if Name in self.score:#判断是否存在
            self.score[Name]=score
    def printf_score(self):#打印成绩
        print(f"姓名为{self.name},年龄为{self.age}，成绩为：")
        for Name in self.score:#for循环，循环打印出各科分数
            print(f"{Name}:{self.score[Name]}分")
zheng=student("小郑",18)
zheng.set_score("语文",88)
zheng.set_score("数学",99)
zheng.set_score("英语",87)
zheng.printf_score()
xue=student("小薛",19)