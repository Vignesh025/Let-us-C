#include<stdio.h>
#include "interest.h"

int main()
{
    int p,n;
    float r;
    printf("enter the principle amount,number of months and rate:");
    scanf("%d %d %f",&p,&n,&r);
    float si=SI(p,n,r);
    int a=AMOUNT(p,si);
    printf("The Simple interest is:%f",si);
    printf("\nThe Amount is %d",a);
}