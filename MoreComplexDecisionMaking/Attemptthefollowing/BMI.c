#include<stdio.h>
#include<math.h>

int main()
{
    float w,h;
    printf("Enter the values:");
    scanf("%f %f",&w,&h);
    float b=w/pow(h,2);
    if(b<=15)
    {
        printf("Starvation");
    }
    else if(b>=15.1 && b<=17.5)
    {
        printf("Anorexic");
    }
    else if(b>=17.6 && b<=18.5)
    {
        printf("Underweight");
    }
    else if(b>=18.6 && b<=24.9)
    {
        printf("Ideal");
    }
    else if(b>=25 && b<=29.9)
    {
        printf("Overweight");
    }
    else if(b>=30 && b<=39.9)
    {
        printf("Obese");
    }
    else if(b>=40)
    {
        printf("Morbidly Obese");
    }
    printf("%f",b);
}