#include<stdio.h>

#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))

int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("The biggest of %d, %d and %d is %d",a,b,c,MAX(a,b,c));
}