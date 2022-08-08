/* 
    ->  Here , we can only write simple program of "structure using pointer"
    ->  struct keyword is used for define structure
    ->  we created a structure type pointer variable to store a structure type variable address - ( struct pointer *ptr )
*/

#include<stdio.h>
void show(struct pointer a);              // Function prototype

struct pointer
{ 
    int i;                        // Created a structure
};

int main()
{   
    struct pointer p;
    struct pointer *ptr;
    ptr = &p;
    ptr->i = 1;                   // or we can also write this : (*ptr).i = 1;
    show(p);                      // function calling
    return 0;
}

void show(struct pointer a)               // function definition
{
    printf("I = %d",a.i);
}
