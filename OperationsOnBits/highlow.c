#include<stdio.h>

void showBits(int);
void main()
{
    int n,r,l,new;
    printf("enter any 1 byte number:");
    scanf("%d",&n);
    showBits(n);
    printf("\nright byte to left:");
    l=n<<4;
    showBits(l);
    printf("\nleft byte to right:");
    r=n>>4;
    showBits(r);
    printf("\nAfter Exchange:");
    new=l|r;
    showBits(new);
    printf("\nThe number after exchange is:%d",new);
}
void showBits(int n)
{
    int i,k;
    for(i=7;i>=0;i--)
    {
        k=n&(1<<i);
        k==0?printf("0"):printf("1");
    }
}