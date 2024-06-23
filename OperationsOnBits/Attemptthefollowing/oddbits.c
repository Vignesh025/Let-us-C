#include<stdio.h>

void showBits(int);
void main()
{
    int n,new;
    printf("Enter a number:");
    scanf("%d",&n);
    showBits(n);
    printf("\nBits of 0xAA:");
    showBits(0xAA);
    printf("\nSet odd bits to 1:");
    new=n|0xAA;
    showBits(new);
    printf("\nThe new number is:%d",new);
}
void showBits(int n)
{
    int i,r;
    for(i=7;i>=0;i--)
    {
        r=n&(1<<i);
        r==0?printf("0"):printf("1");
    }
}