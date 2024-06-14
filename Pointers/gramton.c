#include<stdio.h>

void weight(float *grm,float *ton,float *lbs)
{
    float kg;
    printf("Enter the weight of a commodity in kgs:");
    scanf("%f",&kg);
    *grm=1000*kg;
    *ton=0.001*kg;
    *lbs=2.25*kg;
}
int main()
{
    float a,b,c;
    weight(&a,&b,&c);
    printf("Gram:%.2f\n",a);
    printf("Ton:%f\n",b);
    printf("Pounds:%.2f",c);
}
