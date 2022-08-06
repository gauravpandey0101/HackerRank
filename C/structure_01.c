/*
    -> Simple structure implementation program
    -> First we declare a structure which is store many employee details
    -> Variables are - int id, char name[], char branch[]
    -> Only three employee details are stored in this program
*/

#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[10],branch[10];
};

int main()
{   
    int i;
    struct employee a[i];
    for(i=0;i<3;i++)
    {
        printf("Input %d student details\n",i+1);
        printf("ID = ");
        scanf("%d",&a[i].id);
        printf("\nName = ");
        scanf("%s",a[i].name);        //also use this compare to scanf() for withspace input string => gets()
        printf("\nBranch = ");
        scanf("%s",a[i].branch);
        fflush(stdin);
    }
    for(i=0;i<3;i++)
    {
        printf("Input %d student details are print\n",i+1);
        printf("ID = %d",a[i].id);
        printf("\nName = %s",a[i].name);
        printf("\nBranch = %s\n",a[i].branch);
        fflush(stdin);
    }
    return 0;
}