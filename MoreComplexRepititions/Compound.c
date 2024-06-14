#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,n,q;
    for(int i=1;i<=10;i++)
    {
        printf("Enter the principal:");
        scanf("%f",&p);
        printf("Enter the rate:");
        scanf("%f",&r);
        printf("Enter the number of years:");
        scanf("%f",&n);
        printf("Enter the compound interest:");
        scanf("%f",&q);
        float a=pow(p*(1+(r/q)),n*q);
        printf("The amount is:%.2f\n",a);

    }
}