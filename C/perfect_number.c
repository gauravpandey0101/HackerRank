#include<stdio.h>
int main()
{
    int n,i=1,s=0;
    printf("input any number");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
         s=s+i;
        i++;
    }
    if(s==n)
    printf("%d Perfect Number",n);
    else
    printf("%d Not Perfect",n);
    return 0;
}