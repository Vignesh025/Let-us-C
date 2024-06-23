#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        int a=n%10;
        sum+=a;
        n/=10;
    }
    printf("sum:%d",sum);
}