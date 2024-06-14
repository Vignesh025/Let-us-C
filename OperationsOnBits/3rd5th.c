#include<stdio.h>

void showBits(int);
void main()
{
    int n,new,b3,b5;
    printf("Enter any 8 bit number:");
    scanf("%d",&n);
    showBits(n);
    b3=n&(1<<3);
    b5=n&(1<<5);
    if(b3!=0)
    {
        printf("\n3rd bit is on");
    }
    else
    {
        printf("\n3rd bit is off");
    }
    if(b5!=0)
    {
        printf("\n5th bit is on");
    }
    else
    {
        printf("\n5th bit is off");
    }
    if(b3!=0&&b5!=0)
    {
        b3=~(1<<3);
        b5=~(1<<5);
        new=n&b3;
        new=new&b5;
        printf("\n");
        showBits(b3);
        printf("\n");
        showBits(b5);
        printf("\nNew number is:\n");
        showBits(new);
        printf("\nOld number:%d New number:%d",n,new);
    }
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