#include<stdio.h>
int main()
{
    int a=10,b=15;
    printf("After swap value\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\t%d",a,b);
    return 0;
}