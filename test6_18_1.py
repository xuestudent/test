#文件操作
f=open(".\data.txt","r",encoding="utf—8")#打开文件
count=f.read()#打印文件
print(count)
f.close()#关闭文件

#不用关闭函数
with open(".\data.txt","r",encoding="utf—8") as f:#打开文件
    count=f.read()#打印文件
    print(count)
with open(".\data.txt","r",encoding="utf—8") as f:#打开文件
    print(f.readline())#读取一行
    print(f.readline())
with open(".\data.txt","r",encoding="utf—8") as f:#打开文件
    print(f.readlines())#读取所有
with open(".\data.txt","r",encoding="utf—8") as f:#打开文件
    lines=f.readlines()
    for line in lines:
        print(line)