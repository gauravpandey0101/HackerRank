/*
    -> Created a Encrypted string
    -> Created a function =>(encrypt)
    -> Size of string(str) is 10 predefined
    -> using call by refrence method in this program pass string to the function 
    -> using char pointer string to accept the address of string(str)
*/

#include<stdio.h>
void encrypt(char *str );

int main()
{   
    char str[]="gaurav pandey";
    encrypt(str);
    return 0;
}

void encrypt(char *str)
{
    char *ptr=str;
    while(*ptr!='\0')
    {
        *ptr=*ptr+1;
        ptr++;
    }
    printf("Encrypted message = %s",ptr);
}