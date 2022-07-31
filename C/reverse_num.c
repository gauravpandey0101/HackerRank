#include<stdio.h>
int main()
{
    int n,r=0,d;
    printf("Input numbers for reverse\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reverse Number=%d",r);
    return 0;
}