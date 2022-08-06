/*  
    -> string( stra[] ) has been created that store the name
    -> created a char type of variable to store a single character for count its occurence in string
    -> created a int type variable ( count ) and initialize its value '0' to calculate ocuurence of character
    -> using occurence function to find occurence of any character
*/

#include<stdio.h>
#include<string.h>
void occurence(char str[],char c,int count);    //function prototype

int main()
{
    char str[]="gaurav",c='a';
    int count=0;
    occurence(str,c,count);                     //function calling
    return 0;
}
void occurence(char str[],char c,int count)     //function definition
{
    char *ptr=str;
    
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    printf("Occurence = %d",count);
}