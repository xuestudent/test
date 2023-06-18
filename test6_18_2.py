with open(".\data2.txt","w",encoding="utf—8") as f:#打开文件 a是附加 w只写 r只读 r+覆盖写 a+追加写
    f.write("hello\n")
    f.write("yoyooo\n")


with open(".\data2.txt","a+",encoding="utf—8") as f:#打开文件 a是附加 w只写 r只读 r+覆盖写 a+追加写
    f.write("hefsdg\n")
    f.write("yoyfso")