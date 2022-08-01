#include<stdio.h>

int main()
{
    int n,prime=1,i;
    printf("Input any number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
     if(n%i==0)
     {
        prime=0;
        break;
     }   
    }
    if(prime==0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
return 0;
}