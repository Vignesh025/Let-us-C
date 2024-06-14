#include<stdio.h>
void main()
{
    short int num,i,r;
    printf("Enter any number less than 256:");
    scanf("%d",&num);
    for(i=7;i>=0;i--)
    {
        r=num&(1<<i);
        r==0?printf("0"):printf("1");
    }
    r=num&(1<<3);
    r==0?printf("\nBit number 3 is off"):printf("\nBit number 3 is on");
    r=num&(1<<6);
    r==0?printf("\nBit number 6 is off"):printf("\nBit number 6 is on");
    r=num&(1<<7);
    r==0?printf("\nBit number 7 is off"):printf("\nBit number 7 is on");
}