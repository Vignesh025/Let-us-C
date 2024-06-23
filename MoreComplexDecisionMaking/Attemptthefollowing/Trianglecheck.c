#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the lengths of the sides:");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b) && (b==c))
    {
        printf("It is an equilateral triangle");
    }
    else if((a==b && b!=c) || (a!=b && b==c) || (a==c && a!=b))
    {
        printf("It is an Isosceles triangle");
    }
    else if(a!=b && b!=c && a!=c)
    {
        if((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(a,2)+pow(b,2)))
        {
            printf("It is a right-angled triangle");
        }
        else
        {
            printf("It is a scalene triangle");
        }
    }
}