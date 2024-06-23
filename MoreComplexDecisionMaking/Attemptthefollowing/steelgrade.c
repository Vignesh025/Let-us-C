#include<stdio.h>

int main()
{
    int h,t;
    float c;
    int a,b,d;
    printf("Enter the values:");
    scanf("%d %f %d",&h,&c,&t);
    if(h>50)
    {
        a=1;
    }
    else
    {
        a=0;
    }
    if(c<0.7)
    {
        b=1;
    }
    else
    {
        b=0;
    }
    if(t>5600)
    {
        d=1;
    }
    else
    {
        d=0;
    }
    if(a==1&&b==1&&d==1)
    {
        printf("Grade 10");
    }
    else if(a==1 && b==1 && d==0)
    {
        printf("Grade 9");
    }
    else if(a==0 && b==1 && d==1)
    {
        printf("Grade 8");
    }
    else if(a==1 && b==0 && d==1)
    {
        printf("Grade 7");
    }
    else if(a==1 || b==1 || d==1)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }

}