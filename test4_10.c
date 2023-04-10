#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)//如果scanf返回eof停止运行
    {
        getchar();//获取一个字符
        printf("%c\n", c + 32);//A的ascii码值为65与a的97只差32加上就是a
    }
    return 0;
}