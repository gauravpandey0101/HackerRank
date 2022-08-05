/*  
    -> string has been created that store the name
    -> created a character pointer that is holding the address of the strings

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="gaurav";
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}