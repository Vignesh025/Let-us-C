#include<stdio.h>

int main()
{
    int n,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int i=n;
    while(n>0)
    {
        int a=n%10;
        r=r*10+a;
        n/=10;
    }
    printf("The reverse of the number is:%d\n",r);
    if(i==r)
    {
        printf("they are equal");
    }
    else
    {
        printf("they are not equal");
    }
}