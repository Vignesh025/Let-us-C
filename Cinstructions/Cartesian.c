#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    double r,o;
    scanf("%d %d",&x,&y);
    r=sqrt((x*x)+(y*y));
    //float c=y/x;
    o=atan(y/x);
    printf("%d %d",x,y);
    printf("Polar Co-ordinates are:%lf,%lf",r,o);
}