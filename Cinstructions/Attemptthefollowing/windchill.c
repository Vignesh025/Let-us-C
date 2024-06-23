#include<stdio.h>
#include<math.h>
int main()
{
    float t,v;
    printf("Enter the values:");
    scanf("%f %f",&t,&v);
    double wc=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("The windchill factor is:%lf",wc);
}