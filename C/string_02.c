#include<stdio.h>
#include<string.h>

int main()
{
    char c,str1[10],str2[10];
    int i=0;

    printf("string 1 =");
    scanf("%s",str1);
    printf("Input character by character =");
    
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    printf("First String = %s\n",str1);
    printf("Second String = %s",str2);
return 0;
}