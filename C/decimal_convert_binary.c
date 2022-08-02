#include<stdio.h>

int main()
{
    int n,i=0,r,b=0,n1;
    printf("input any number");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%2;
        b=b+r*i;
        i=i*10;
        n=n/2;
    }
    printf("Binary of decimal number %d = %d",n1,b);
return 0;
}