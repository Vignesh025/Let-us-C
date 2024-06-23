#include<stdio.h>

struct date
{
    int d;
    int m;
    int y;
};
int compare(struct date first,struct date second);
void main()
{
    struct date d1,d2;
    printf("Enter First date day:");
    scanf("%d",&d1.d);
    printf("Enter First date month:");
    scanf("%d",&d1.m);
    printf("Enter First date year:");
    scanf("%d",&d1.y);
    printf("Enter Second date day:");
    scanf("%d",&d2.d);
    printf("Enter Second date month:");
    scanf("%d",&d2.m);
    printf("Enter Second date year:");
    scanf("%d",&d2.y);
    printf("\n");
    switch (compare(d1,d2))
    {
    case 0:
        printf("Dates are equal");
        break;
    case 1:
        printf("Dates are not equal");
        break;
    }
}
int compare(struct date first,struct date second)
{
    if(first.d==second.d&&first.m==second.m&&first.y==second.y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}