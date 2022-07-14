#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,d;
    scanf("%d",&n);
    int summ=0;
    while(n!=0)
    {
        d=n%10;
        summ=summ+d;
        n=n/10;
    }
    printf("%d",summ);
    return 0;
}
