#include<stdio.h>
int main()
{
    int n,s=0,d;
    printf("Input numbers\n");
    scanf("%d",&n);
    int n1=n;
    while(n!=0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(n1==s)
    printf("%d - Armstrong Number",n1);
    else
    printf("%d - Not Armstrong",n1);
    return 0;
}