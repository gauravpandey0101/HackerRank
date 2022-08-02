#include<stdio.h>
void pattern(int n);
int main()
{
    int n;
    printf("how many lines do you want to print ?");
    scanf("%d",&n);
    pattern(n);
return 0;
}
void pattern(int n)
{
    if(n==1)
    { printf("*\n");
     return;
    }
    else
    pattern(n-1);
    for(int i=0;i<(n*2-1);i++)
    {
      printf("*");
    }
    printf("\n");
}