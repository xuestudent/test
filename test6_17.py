#列表
d=[]
d.append("a")
d.append("b")
d.remove("a")
print(d)
p=[56,23,24,45,353,35]
max_p=max(p)
min_p=min(p)
sorted_p=sorted(p)
print(max_p)
print(min_p)
print(sorted_p)

#判断
a=input("请输入性别")
if a == "男":
    print("先生您好")
else :
    print("女士您好")

num = int(input("请输入BIM"))

if num<=18.5:
    print("您属于偏瘦范围")
elif 18.5<num<=25:
    print("您属于正常范围")
elif 25<num<=30:
    print("您属于偏胖")
else:
    print("您属于肥胖")

