#include<stdio.h>

int main()
{
    for(int i=0;i<=23;i++)
    {
        if(i==0)
        {
            printf("12 Midnight\n");
        }
        else if(i<12)
        {
            printf("%d AM\n",i);
        }
        else if(i==12)
        {
            printf("%d NOON\n",i);
        }
        else if(i>12)
        {
            printf("%d PM\n",i-12);
        }
    }
}