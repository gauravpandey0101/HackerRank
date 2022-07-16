#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k);
int main() 
{
    int n,k;
    scanf("%d\n%d",&n,&k);
    calculate_the_maximum(n,k);
    return 0;
}
void calculate_the_maximum(int n, int k)
{
    int i,j;
    int and=0,or=0,xor=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;i<=n;i++)
        {
            if((i&j)>and && (i&j)<k)
             and=i&j;
            if((i|j)>or && (i|j)<k)
             or=i|j;
            if((i^j)>xor && (i^j)<k)
             xor=i^j;
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
}
