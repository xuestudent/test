from bs4 import BeautifulSoup
import requests
headers={
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0 Safari/537.36 Edg/114.0.1823.51"
}

for start_num in range(0,250,25):
    response=requests.get(f"https://movie.douban.com/top250?start={start_num}",headers=headers)
    html=response.text
    soup=BeautifulSoup(html,"html.parser")
    all_titals=soup.findAll("span",attrs={"class":"title"})#第一个是传入标签名   第二根据元素属性提取
    for tital in all_titals:
        tital_string=tital.string#提取文字
        if "/" not in tital_string:#如果”/“不在打印（也就是打印没有/的）
            print(tital_string)