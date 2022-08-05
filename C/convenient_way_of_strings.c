#include<stdio.h>

int main()
{   
    // print any strings using char pointer for better way
    
    char *ptr="Gaurav Pandey\nMca";
    printf("%s",ptr);

    // input from user using %s 

    char str[10];
    printf("\nInput any strings\n");
    scanf("%[\n]s",str);
    printf("Your Input is = %s",str);
return 0;
}