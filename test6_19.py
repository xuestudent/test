import requests
response = requests.get(url='http://zx529.xyz')#向网页发送请求
if response.ok:
    print(response.text)
else:
    print("请求失败")