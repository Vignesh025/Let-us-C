#include<stdio.h>

struct Date
{
    int d;
    int m;
    int y;
};
struct Employee
{
    char name[50];
    char code[5];
    struct Date doj;
};
int yeardiff(struct Date doj,struct Date curr);
void main()
{
    struct Employee e[5];
    struct Date curr;
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter Name:");
        scanf("%s",&e[i].name);
        printf("\nEnter Employee Code:");
        scanf("%s",&e[i].code);
        printf("\nEnter Joining day:");
        scanf("%d",&e[i].doj.d);
        printf("\nEnter joining month:");
        scanf("%d",&e[i].doj.m);
        printf("\nEnter Joining year:");
        scanf("%d",&e[i].doj.y);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%s\t%s\t%d/%d/%d",e[i].name,e[i].code,e[i].doj.d,e[i].doj.m,e[i].doj.y);
    }
    printf("\nEnter current day:");
    scanf("%d",&curr.d);
    printf("\nEnter current Month:");
    scanf("%d",&curr.m);
    printf("\nEnter current Year:");
    scanf("%d",&curr.y);
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        if(yeardiff(e[i].doj,curr)>=3)
        {
            printf("\n%s\t%s\t%d/%d/%d",e[i].name,e[i].code,e[i].doj.d,e[i].doj.m,e[i].doj.y);
        }
    }
}
int yeardiff(struct Date doj,struct Date curr)
{
    int totalday=0,m;
    if(curr.y-doj.y>1)
    {
        totalday=totalday+((curr.y-doj.y-1)*365);
    }
    totalday=totalday+curr.d;
    for(m=1;m<curr.m;m++)
    {
        switch(m)
        {
            case 1:
                totalday=totalday+31;
                break;
            case 2:
                totalday=totalday+28;
                break;
            case 3:
                totalday=totalday+31;
                break;
            case 4:
                totalday=totalday+30;
                break;
            case 5:
                totalday=totalday+31;
                break;
            case 6:
                totalday=totalday+30;
                break;
            case 7:
                totalday=totalday+31;
                break;
            case 8:
                totalday=totalday+31;
                break;
            case 9:
                totalday=totalday+30;
                break;
            case 10:
                totalday=totalday+31;
                break;
            case 11:
                totalday=totalday+30;
                break;
            case 12:
                totalday=totalday+31;
                break;
        }
    }
    totalday=totalday-doj.d+1;
    for(m=doj.m;m<=12;m++)
    {
        switch(m)
        {
            case 1:
                totalday=totalday+31;
                break;
            case 2:
                totalday=totalday+28;
                break;
            case 3:
                totalday=totalday+31;
                break;
            case 4:
                totalday=totalday+30;
                break;
            case 5:
                totalday=totalday+31;
                break;
            case 6:
                totalday=totalday+30;
                break;
            case 7:
                totalday=totalday+31;
                break;
            case 8:
                totalday=totalday+31;
                break;
            case 9:
                totalday=totalday+30;
                break;
            case 10:
                totalday=totalday+31;
                break;
            case 11:
                totalday=totalday+30;
                break;
            case 12:
                totalday=totalday+31;
                break;
        }
    }
    return totalday/365;
}