#include<stdio.h>
void slice(char *ptr,int s,int e);
int main()
{
    char str[]="agaurav";
    printf("Before slice =%s",str);
    slice(str,1,6);
    printf("\nAfter slice =%s",str);
    return 0;
}

void slice(char *ptr,int s,int e)
{   
    int i=0;
    while(i<e)
    {
        ptr[i]=ptr[i+1];
        i++;
    }
    ptr[i]='\0';
}