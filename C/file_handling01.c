/*
    ->  fopen for open Binary or Txt files to perform some operations inside it
    ->  Created a pointer for FileHandling
    ->  if file not exist then return NULL
*/

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num=2;
    char str[1024]="gaurav pandey is a very simple guy and web developer ~";
    ptr = fopen("sample01.txt","w");      
    if(ptr == NULL)
    {
        //  return error message for file not exist
        printf("file not exist\n");         
    }
    else
    {   
        //  this function helps you to write something in the file 
        fprintf(ptr,"num = %d\n",num);     
        fprintf(ptr,"%s\n",str);
    }
        //  close file not exist
    fclose(ptr); 
    return 0;
}