#include<stdio.h>

#define AMEAN(a,b) ((a+b)/2)

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("The Arithmetic mean of %d and %d is %d",a,b,AMEAN(a,b));
}