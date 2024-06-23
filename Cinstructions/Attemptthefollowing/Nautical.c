#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2;
    printf("Enter the values:");
    scanf("%f %f %f %f",&l1,&l2,&g1,&g2);
    double d= 3963* acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g2-g1));
    printf("The distance is:%lf",d);
}