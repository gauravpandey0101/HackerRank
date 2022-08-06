/*  
    -> string( stra[] ) has been created that store the name
    -> created a second string( strb[] ) to copy of first string( stra[] )

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char stra[]="gaurav",strb[10];
    int i=0,j=0;
    for(i=0;stra[i]!='\0';i++)
    {   
        strb[i]=stra[i];
        
    }
    strb[i]='\0';
    printf("%s",strb);
    return 0;
}