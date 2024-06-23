#include<stdio.h>
#include<string.h>
#include<conio.h>

void displayData(FILE*);
void displaynthrecord(FILE*);
void main()
{
    char name[50];
    FILE *fs;
    char choice;
    fs=fopen("class.dat","rb+");
    if(fs==NULL)
    {
        fs=fopen("class.dat","wb+");
    }
    while(1)
    {
        printf("Do you want to add record(y/n):");
        choice=getche();
        if(choice=='y')
        {
            printf("\nEnter name of the student:");
            gets(name);
            fseek(fs,0,SEEK_END);
            fwrite(name,sizeof(name),1,fs);
        }
        else
        {
            break;
        }

    }
    rewind(fs);
    printf("\n1.To display complete data.");
    printf("\n2.To display nth record.");
    printf("\nEnter your choice:");
    choice=getche();
    if(choice=='1')
    {
        displayData(fs);
    }
    else if(choice=='2')
    {
        displaynthrecord(fs);
    }
    fclose(fs);
}
void displayData(FILE *fs)
{
    char name[50];
    while(fread(name,sizeof(name),1,fs)!=NULL)
    {
        printf("\n%s",name);
    }
}
void displaynthrecord(FILE *fs)
{
    int n,i=1;
    char name[50];
    printf("\nEnter nth number:");
    scanf("%d",&n);
    rewind(fs);
    while(fread(name,sizeof(name),1,fs)!=NULL)
    {
        if(n==i)
        {
            printf("\n%s",name);
            break;
        }
        i++;
    }
}