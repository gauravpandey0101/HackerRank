#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("input all values\nPrice,Rate,Time\n");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("SI = %f",si);
    return 0;
}