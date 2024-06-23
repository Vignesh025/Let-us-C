#include<stdio.h>
#include<string.h>
struct policy
{
    unsigned age:1;
    unsigned gender:1;
    unsigned duration:7;
    char name[10];
};
void main()
{
    int duration;
    char age[10],gender[10];
    struct policy p;
    printf("Enter policy holder name:");
    scanf("%s",&p.name);
    printf("\nEnter policy holder gender(male/female):");
    scanf("%s",&gender);
    printf("\nEnter Policy holder age(minor/major):");
    scanf("%s",&age);
    printf("\nEnter policy duration:");
    scanf("%d",&duration);
    p.duration=duration;
    if(strcmp(gender,"male")==0)
    {
        p.gender=0;
    }
    else
    {
        p.gender=1;
    }
    if(strcmp(age,"minor")==0)
    {
        p.age=0;
    }
    else
    {
        p.age=1;
    }
    printf("Entered Policy details:\n%s\t%s\t%s\t%d",p.name,gender,age,duration);
    printf("Entered Policy details:\n%s\t%s\t%s\t%d",p.name,p.gender,p.age,p.duration);
}