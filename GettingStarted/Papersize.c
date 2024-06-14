#include<stdio.h>

int main()
{
    int l=1189,b=841;
    for(int i=0;i<=8;i++)
    {
        printf("The size of paper A%d is %dmm x %dmm \n",i,l,b);
        int c=l/2;
        l=b;
        b=c;
    }
}