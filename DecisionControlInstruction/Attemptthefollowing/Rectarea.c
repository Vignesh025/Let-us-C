#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the length and breadth of the rectangle:");
    scanf("%d %d",&l,&b);
    int a=l*b;
    int p=2*(l+b);
    //printf("%d %d",a,p);
    if(a>p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}