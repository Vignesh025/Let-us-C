#include<stdio.h>
#include<stdlib.h>

#define AVALUE(x) (abs(x))

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The absolute value of the %d is %d",n,AVALUE(n));
}