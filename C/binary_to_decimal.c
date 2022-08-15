#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,i=0,d,ans=0;
    printf("input any binary number");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        d = n % 10;
        if( d==1 )
        {
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }
    printf("Decimal of Binary number %d = %d",n1,ans);
return 0;
}
