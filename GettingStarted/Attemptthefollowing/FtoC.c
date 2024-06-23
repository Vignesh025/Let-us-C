#include<stdio.h>

int main()
{
    double f;
    printf("enter the farenheit:");
    scanf("%lf",&f);
    double c=(f-32)*45/9;
    printf("The value in Celsius is:%lf",c);

}