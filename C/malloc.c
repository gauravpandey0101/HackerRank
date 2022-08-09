#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    // allocate memory for pointers In C
    ptr = (int *)malloc(5*sizeof(int));

    for(int i = 0; i < 5; i++)
    {
    //  calculate number of square for each variables and print them  
        ptr[i] = (i+1)*(i+1);
        printf("%d = %d\n ", i+1,ptr[i]);
    }
    //  free memory allocated using malloc
    free(ptr);
    return 0;
} 
