#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cricketer{
    char name[10];
    int age;
    int mat;
    float avg;
};
int main()
{
    struct cricketer c[25];
    for(int i=0;i<20;i++)
    {
        printf("Enter the name:");
        scanf("%s",&c[i].name);
        printf("Enter the age:");
        scanf("%d",c[i].age);
        printf("Enter the no. of test matches played:");
        scanf("%d",&c[i].mat);
        printf("Enter the avg runs:");
        scanf("%f",&c[i].avg);
    }
    for(int i=0;i<20;i++)
    {
        printf("%s\t%d\t%d\t%f\n",c[i].name,c[i].age,c[i].mat,c[i].avg);
    }
}