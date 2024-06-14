#include<stdio.h>
void showBits(int n);
void main()
{
    int n,i,r,l,k,new;
    printf("Enter a number less than 2 bytes:");
    scanf("%d",&n);
    printf("\nBinary value of the number:");
    showBits(n);
    printf("\nleft to right:");
    r=n>>8;
    showBits(r);
    printf("\nright to left:");
    l=n<<8;
    showBits(l);
    printf("\nnew number:");
    new=l|r;
    showBits(new);
    printf("\nNew number after exchanging is:%d",new);
}
void showBits(int n)
{
    int i,r;
    for(i=15;i>=0;i--)
    {
        r=n&(1<<i);
        r==0?printf("0"):printf("1");
    }
}