#include<stdio.h>

struct date
{
    unsigned day:5;
    unsigned month:4;
    unsigned year:12;
};
void main()
{
    struct date d[10],ad;
    int day,month,year,i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter day of joining of employee %d:",i+1);
        scanf("%d",&day);
        printf("Enter month of joining of employee %d:",i+1);
        scanf("%d",&month);
        printf("Enter year of joining of employee %d:",i+1);
        scanf("%d",&year);
        d[i].day=day;
        d[i].month=month;
        d[i].year=year;
    }
    for(j=0;j<10;j++)
    {
        for(i=j+1;i<10;i++)
        {
            if(d[j].year>d[i].year)
            {
                ad=d[j];
                d[j]=d[i];
                d[i]=ad;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\nEmployee %d = %d/%d/%d",i+1,d[i].day,d[i].month,d[i].year);
    }
}