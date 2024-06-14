#include<stdio.h>
#include<string.h>
struct student
{
    char rollno[6];
    char name[50];
    char dept[50];
    char course[50];
    int yoj;
};
int PrintName(int,struct student[]);
int PrintData(char[],struct student[]);
int main()
{
    int year;
    struct student s[]={
        {"12001","Alex","CSE","HTML",2020},
        {"12002","Thomas","IT","DSA",2021},
        {"12003","John","CSBS","WEB DEV",2022},
        {"12004","Peter","CSE","HTML",2020},
        {"12005","Mark","CSBS","DSA",2022},
    };
    int c;
    char roll[6];
    printf("What do you want to know?\n1.Name\n2.Data\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter a year:");
        scanf("%d",&year);
        PrintName(year,s);
    }
    else if(c==2)
    {
        printf("Enter a roll no:");
        scanf("%s",roll);
        PrintData(roll,s);
    }
}
int PrintName(int year,struct student s[50])
{
    for(int i=0;i<5;i++)
    {
        if(year==s[i].yoj)
        {
            printf("%s\n",s[i].name);
        }
    }
}
int PrintData(char roll[6],struct student s[])
{
    for(int i=0;i<5;i++)
    {
        if(strcmp(roll,s[i].rollno)==0)
        {
            printf("%s\t%s\t%s\t%d\n",s[i].name,s[i].dept,s[i].course,s[i].yoj);
        }
    }
}