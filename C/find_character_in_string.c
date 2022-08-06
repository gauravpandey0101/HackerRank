#include<stdio.h>
#include<string.h>
void check(char str[],char c,int count);    //function prototype

int main()
{
    char str[]="gaurav",c='a';
    int count=0;
    check(str,c,count);                     //function calling
    return 0;
}
void check(char str[],char c,int count)     //function definition
{
    char *ptr=str;
    
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            count=1;
            break;
        }
        ptr++;
    }
    if(count==0)
        printf("not present");
    else
        printf("present");
}