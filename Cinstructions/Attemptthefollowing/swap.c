#include<stdio.h>

int main()
{
    int c,d;
    printf("Enter numbers:");
    scanf("%d %d",&c,&d);
    int t=c;
    c=d;
    d=t;
    printf("the number c is:%d and d is:%d",c,d);
}