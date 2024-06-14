#include<stdio.h>

int main()
{
    int class,n,g;
    printf("Enter the class and number of subjects failed:");
    scanf("%d %d",&class,&n);
    switch (class)
    {
        case 1:
            if(n>3)
            {
                g=0;
            }
            else
            {
                g=5*n;
            }
            break;
        case 2:
            if(n>2)
            {
                g=0;
            }
            else
            {
                g=4*n;
            }
            break;
        case 3:
            if(n>3)
            {
                g=0;
            }
            else
            {
                g=n*3;
            }
            break;
    }
    printf("The grace marks obtained:%d",g);
}