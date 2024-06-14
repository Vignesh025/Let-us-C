#include<stdio.h>
#define _BV(bit) (1<<bit)
void showBits(int);
void showBitsBV(int);
void main()
{
    printf("Output by showBits function:");
    showBits(47);
    printf("\nOutput by macro:");
    showBitsBV(47);
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
void showBitsBV(int n)
{
    int i,r;
    for(i=7;i>=0;i--)
    {
        r=n&_BV(i);
        r==0?printf("0"):printf("1");
    }
}