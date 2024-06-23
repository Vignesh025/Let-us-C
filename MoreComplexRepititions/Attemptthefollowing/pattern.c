#include<stdio.h>

int main()
{
    int c=1;
    for(int i=0;i<4;i++)
    {
        for(int j=4-i;j>0;j--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d ",c);
            c++;
        }
        for(int j=4-i;j>0;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
}