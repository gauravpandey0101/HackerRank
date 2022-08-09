/*
    ->  fopen for open Binary or Txt files to perform some operations inside it
    ->  Created a pointer for FileHandling
    ->  if file not exist then return NULL
*/

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("sample.txt","r");      
    if(ptr == NULL)
    {
        //  return error message for file not exist
        printf("file not exist\n");         
    }
    else
    {   
        // this function helps you to read data from the file 
        fscanf(ptr,"%d",&num);
        printf("num = %d",num);      
    }
        //  close file not exist
    fclose(ptr);
    return 0;
}