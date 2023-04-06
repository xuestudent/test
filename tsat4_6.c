#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("year=%d\n", a / 10000);
    a %= 10000;
    printf("month=%.2d\n", a / 100);
    printf("date=%.2d\n", a % 100);
    return 0;
}