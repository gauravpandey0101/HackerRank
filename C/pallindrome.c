#include<stdio.h>
int main()
{
    int n,r=0,n1,d;
    printf("Input number\n");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(n1==r)
    printf("%d Pallindrome",n1);
    else
    printf("%d Not Pallindrome",n1);
    
    return 0;
}