#include<stdio.h>

int main()
{
    double l,b,r;
    printf("enter the length,breadth and radius:");
    scanf("%lf %lf %lf",&l,&b,&r);
    double Ar=l*b;
    double Pr=(l+b)*2;
    float pi= 22/7;
    double Ac= pi*r*r;
    double Pc= 2*pi*r;
    printf("Area of the rectangle:%lf \n",Ar);
    printf("Perimeter of the rectangle:%lf \n",Pr);
    printf("Area of the Circle:%lf \n",Ac);
    printf("Perimeter of the Circle:%lf\n",Pc);
}