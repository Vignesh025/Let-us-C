#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,r,x2,y2;
    printf("Enter the centre of the circle:");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter the radius:");
    scanf("%d",&r);
    printf("\nEnter the point:");
    scanf("%d %d",&x2,&y2);
    double d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if(d>r)
    {
        printf("outside");
    }
    else if(d==r)
    {
        printf("on the circle");
    }
    else
    {
        printf("inside the circle");
    }
}