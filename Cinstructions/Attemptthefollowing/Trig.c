#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter angle:");
    scanf("%d",&a);
    printf("sine angle is:%f\n",sin(a));
    printf("cosine angle is:%f\n",cos(a));
    printf("tan angle is:%f\n",tan(a));
    printf("cosec angle is:%f\n",1/sin(a));
    printf("sec angle is:%f\n",1/cos(a));
    printf("cot angle is:%f\n",1/tan(a));
}