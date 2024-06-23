#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
};
struct trans
{
    int roll;
    char status;
};
void main()
{
    FILE *fm,*ft,*fu;
    char choice;
    struct student s;
    struct trans t;
    fm=fopen("master.dat","rb+");
    if(fm==NULL)
    {
        fm=fopen("master.dat","wb+");
    }
    fseek(fm,0,SEEK_END);
    while(1)
    {
        printf("\nDo you want to add student record(y/n):");
        choice=getche();
        if(choice=='y')
        {
            printf("\nEnter student name:");
            scanf("%s",s.name);
            fflush(stdin);
            printf("\nEnter rollno:");
            scanf("%d",&s.roll);
            fwrite(&s,sizeof(s),1,fm);
        }
        else
        {
            break;
        }
    }
    rewind(fm);
    while(fread(&s,sizeof(s),1,fm)!=NULL)
    {
        printf("\n%s\t%d",s.name,s.roll);
    }
    printf("\n\nPress any key to continue:");
    getch();
    ft=fopen("trans.dat","rb+");
    if(ft==NULL)
    {
        ft=fopen("trans.dat","wb+");
    }
    fseek(ft,0,SEEK_END);
    while(1)
    {
        printf("\nDo you want to add transaction record(y/n):");
        choice=getche();
        if(choice=='y')
        {
            printf("\nEnter rollno:");
            scanf("%d",&t.roll);
            printf("\nEnter status(D/J):");
            scanf(" %c",&t.status);
            fwrite(&t,sizeof(t),1,ft);
        }
        else
        {
            break;
        }
    }
    rewind(ft);
    while(fread(&t,sizeof(t),1,ft)!=NULL)
    {
        printf("\n%d\t%c",t.roll,t.status);
    }
    printf("\n\nPress any key to continue:");
    getch();
    fu=fopen("updated.dat","rb+");
    if(fu==NULL)
    {
        fu=fopen("updated.dat","wb+");
    }
    rewind(fm);
    rewind(ft);
    while(feof(fm)==0)
    {
        fread(&s,sizeof(s),1,fm);
        while(feof(ft)==0)
        {
            fread(&t,sizeof(t),1,ft);
            if(s.roll==t.roll)
            {
                if(t.status=='J')
                {
                    fwrite(&s,sizeof(s),1,fu);
                }
                break;
            }
        }
    }
    rewind(fu);
    while(fread(&s,sizeof(s),1,fu)!=NULL)
    {
        printf("\n%s\t%d",s.name,s.roll);
    }
    fclose(fm);
    fclose(ft);
    fclose(fu);
}