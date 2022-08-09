#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr; 
    int n;
    printf("How many do you want to store integers?\n");
    scanf("%d", &n);

    // allocate memory for pointers In C
    ptr = (int *)calloc(n,sizeof(int));     
    
    for(int i = 0; i < n; i++)
    {
    // bydefault initialized to zero values in calloc memory allocation
        printf("%d = %d\n ", i+1,ptr[i]);   
    }
    // free memory allocated using calloc memory allocation
    free(ptr);
    return 0;
} 
