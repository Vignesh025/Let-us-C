#include<stdio.h>
int non_rec(int n)
{
    int p=1,b=0;
    while(n!=0)
    {
        int a=n%2;
        b=b+(a*p);
        p=p*10;
        n/=2;
    }
    return b;
}
int rec(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return((n%2)+10*rec(n/2));
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The binary equivalent using non-rec is:%d\n",non_rec(n));
    printf("The binary equivalent using rec is:%d",rec(n));
}