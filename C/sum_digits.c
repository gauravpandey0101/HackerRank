#include<stdio.h>
int main()
{
    int n,s=0,d;
    printf("Input numbers for sum\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("sum of digits=%d",s);
    return 0;
}