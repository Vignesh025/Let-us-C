#include<stdio.h>

int prime(int x)
{
    int a;
    for(a=2;a<=x;a++)
    {
        if(x%a==0)
        {
            printf("%d ",a);
            x = x/a;
            a--;
        }
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
}