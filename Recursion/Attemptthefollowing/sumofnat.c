#include<stdio.h>

int sum(int n)
{
    while(n!=0)
    {
        return(n+sum(n-1));
    }
}
int main()
{
    printf("%d",sum(10));
}