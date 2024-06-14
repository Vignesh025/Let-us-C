#include<stdio.h>
#include<conio.h>

int checkbits(int,int,int);
void main()
{
    if(checkbits(10,3,1)==0)
    {
        printf("false");
    }
    else
    {
        printf("True");
    }
}
int checkbits(int x,int p,int n)
{
    int r;
    while(n>0)
    {
        r=x&(1<<p);
        if(r==0)
        {
            break;
        }
        n--;
        p--;
    }
    return r;
}