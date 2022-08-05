/*
    here created a string and calculate its length
*/
#include<stdio.h>
void length(char *str);

int main()
{
    char str[10]="gaurav";
    length(str);
return 0;
}

void length(char *str)
{
    int l=0;
    while(*str!='\0')
    {
        l++;
        str++;
    }
    printf("Length of string = %d",l);
}