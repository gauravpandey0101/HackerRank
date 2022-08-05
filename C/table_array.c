/* 
    -> Here created a program to print table of 2 using function and array 
    -> only integer number table print
    -> using pointer concept ( call by refrence )
*/
#include<stdio.h>
void mtable(int *arr, int t,int s);

int main()
{
    int arr[1][10],t=2,s=10;
    mtable(arr[0],t,s);
    return 0;
}
void mtable(int *arr, int t, int s)
{
    for(int i=0;i<s;i++)
    {
        arr[i]=t*(i+1);
    }
    for(int i=0;i<s;i++)
    {
        printf("%d * %d = %d\n",t,(i+1),arr[i]);
    }
}
