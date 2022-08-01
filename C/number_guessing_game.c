#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,num_guess=1;
    srand(time(0));
    num=rand()%100+1;
    //printf("Random Number is %d\n",num);
    do
    {
     printf("Please Guess Any Number\n");
     scanf("%d",&guess);
     if(guess>num)
     {
        printf("Lower number please\n");
     }
     else if(guess<num)
     {
        printf("Higher Number Please\n");
     }
     else{
        printf("You guessed it in %d Attempts\n", num_guess);
     }
     num_guess++;
    } while(guess!=num);
    
return 0;
}