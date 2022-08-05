#include<stdio.h>

int main()
{
    int n,i=0,r,b,rem,d=0;
    printf("input any binary number");
    scanf("%d",&b);
    n=b;
    while(b!=0)
    {
        rem=b%10;
        d=d+rem*pow(2,i);
        b=b/10;
        i++;
    }
    printf("Decimal of Binary number %d = %d",n,d);
return 0;
}