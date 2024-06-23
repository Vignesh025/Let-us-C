#include<stdio.h>

int leapyear(int n)
{
    if(n%4==0 && n%100!=0 || n%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a year:");
    scanf("%d",&n);
    if(leapyear(n)==1)
    {
        printf("It is a leap year.");
    }
    else
    {
        printf("It is not a leap year");
    }
}