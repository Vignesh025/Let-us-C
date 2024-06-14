#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int sort_function(const void *a,const void *b);
struct student{
    char name[20];
    int age;
};
int main()
{
    FILE *fp;
    struct student s;
    struct student sa[5];
    int i=0;
    char choice;
    fp=fopen("student2.txt","w");
    if(fp==NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    printf("Do you want to add record?(y,n):");
    choice=getche();
    if(choice=='y')
    {
        while(1)
        {
            printf("\nEnter Student name:");
            scanf("%s",s.name);
            fprintf(fp,"%s ",s.name);
            printf("Enter age:");
            scanf("%d",&s.age);
            fprintf(fp,"%d\n",s.age);
            printf("\n Do you want to enter more records?(y,n):");
            choice=getch();
            if(choice=='n')
            {
                break;
            }
            
        }
    }
    fclose(fp);
    fp=fopen("student2.txt","r");
    printf("\n\nThe records are:");
    while(fscanf(fp,"%s %d",s.name,&s.age)!=EOF)
    {
        printf("\n%s %d\n",s.name,s.age);
        sa[i]=s;
        i++;
    }
    fclose(fp);
    printf("\nBuffer data:\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\t%d\n",sa[i].name,sa[i].age);
    }
    printf("Sorted Data:\n");
    qsort((void *)sa,5,sizeof(sa[0]),sort_function);
    for(int i=0;i<5;i++)
    {
        printf("%s\t%d\n",sa[i].name,sa[i].age);
    }
}
int sort_function(const void *a,const void *b)
{
    return( strcmp(((struct student *)a)->name,((struct student *)b)->name));
}