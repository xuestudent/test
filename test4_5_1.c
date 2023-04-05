#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)//EOF被定义为-1
    {
        getchar();//取出回车字符
        printf("%c\n", c + 32);
    }
    return 0;
}