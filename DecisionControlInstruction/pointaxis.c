#include<stdio.h>

int main()
{
    int x1, y1;
    printf("Enter the co-ordinates of point: ");
    scanf("%d %d", &x1, &y1);

    if(x1 == 0 && y1 !=0)
        printf("Point (%d, %d) lies on y-axis", x1, y1);
    else if (x1 !=0 && y1 == 0)
        printf("Point (%d, %d) lies on x-axis", x1, y1);
    else if (x1 == 0 && y1 == 0)
        printf("Point (%d, %d) lies on the origin", x1, y1);
    else
        printf("Point (%d, %d) neither lie on x-axis nor on y-axis", x1, y1);
}