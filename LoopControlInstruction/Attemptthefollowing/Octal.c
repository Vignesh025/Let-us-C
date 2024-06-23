#include<stdio.h>

int main()
{
    int n,c=0,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        int i=n%8;
        c=c*10+i;
        n/=8;
    }
    while(c>0)
    {
        int a=c%10;
        k=k*10+a;
        c/=10;
    }
    printf("The octal equivalent is:%d",k);
}