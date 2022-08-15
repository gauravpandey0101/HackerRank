#include<stdio.h>
#include <math.h>

int main()
{
    int n,ans=0,r,bit,n1,i=0;
    printf("input any number");
    scanf("%d",&n);
    n1=n;
    while( n!=0 ) 
    {
        bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    printf("Binary of decimal number %d = %d",n1,ans);
return 0;
}
