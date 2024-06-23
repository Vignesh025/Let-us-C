#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the coordinates:");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    int m=(y2-y1)/(x2-x1);
    int n=(y3-y2)/(x3-x2);
    if(m==n)
    {
        printf("They are on same line");
    }
    else
    {
        printf("They are not on the same line");
    }
}