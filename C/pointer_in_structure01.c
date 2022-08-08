/* 
    ->  Here , we can only write simple program of "structure using pointer"
    ->  struct keyword is used for define structure
    ->  we created a structure type pointer variable to store a structure type variable address - ( struct pointer *ptr )
*/

#include<stdio.h>

struct pointer
{
    int i;
};

int main()
{   
    struct pointer p;
    struct pointer *ptr;
    ptr = &p;
    ptr->i = 1;                   // or we can also write this : (*ptr).i = 1;
    printf("I = %d",(ptr->i));
    return 0;
}