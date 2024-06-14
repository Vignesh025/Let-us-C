#include<stdio.h>
#include<string.h>

struct donor
{
    char name[20];
    char address[40];
    int age;
    int type;
};
void main()
{
    FILE *fs;
    struct donor d;
    char choice;
    fs=fopen("hospital.dat","rb+");
    if(fs==NULL)
    {
        fs=fopen("hospital.dat","wb+");
    }
    while(1)
    {
        printf("\nDo you want to add record(y/n):");
        choice=getche();
        if(choice=='y')
        {  
            fflush(stdin);
            printf("\nEnter Donor Name:");
            gets(d.name);
            printf("\nEnter Donor Address:");
            gets(d.address);
            printf("\nEnter Donor Age:");
            scanf("%d",&d.age);
            printf("\nEnter Blood type:");
            scanf("%d",&d.type);
            fwrite(&d,sizeof(d),1,fs);            //printf("\n\n");
            //printf("\n%s\t%s\t%d\t%d",d.name,d.address,d.age,d.type);
        }
        else
        {
            break;
        }
    }
    rewind(fs);
    while(fread(&d,sizeof(d),1,fs)!=NULL)
    {
        printf("\n%s\t%s\t%d\t%d",d.name,d.address,d.age,d.type);
    }
    rewind(fs);
    printf("\nFiltered data");
    while(fread(&d,sizeof(d),1,fs)!=NULL)
    {
        if(d.age<25 && d.type==2)
        {
            printf("\n%s\t%s\t%d\t%d",d.name,d.address,d.age,d.type);   
        }
    }
    fclose(fs);
}
