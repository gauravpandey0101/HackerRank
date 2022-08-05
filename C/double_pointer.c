#include<stdio.h>

int main()
{
    int i=10,*a,**b;
    a=&i;
    b=&a;
    printf("i=%u\n",a);
    printf("i=%u\n",b);
    printf("i=%d\n",*a);
    printf("i=%u",*b);
return 0;
}