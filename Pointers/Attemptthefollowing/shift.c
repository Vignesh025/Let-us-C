#include<stdio.h>
void shift(int *x,int *y,int *z)
{
    int temp= *x;
    *x=*y;
    *y=*z;
    *z=temp;
}
int main()
{
    int x,y,z;
    printf("Enter the x y and z value:");
    scanf("%d %d %d",&x,&y,&z);
    printf("The values before shifting x:%d y:%d z:%d\n",x,y,z);
    shift(&x,&y,&z);
    printf("The values before shifting x:%d y:%d z:%d",x,y,z);
}