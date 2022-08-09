/*
    ->  fopen for open Binary or Txt files with doing operations in the file
    ->  Created a pointer for FileHandling
    ->  fscanf for read values from "sample.txt"
*/

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("sample.txt","r");      
    fscanf(ptr,"%d",&num);              
    printf("num = %d",num);
    return 0;
}