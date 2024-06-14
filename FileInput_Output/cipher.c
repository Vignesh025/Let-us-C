#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i;
    FILE *f;
    char name[256];
    char choice;
    f=fopen("cipher.txt","w+");
    printf("Do you want to add line in File(y/n):");
    choice=getche();
    while(choice=='y')
    {
        printf("\nEnter New line for the file:");
        gets(name);
        i=0;
        while(name[i]!='\0')
        {
            name[i]=name[i]+128;
            i++;
        }
        fputs(name,f);
        printf("\nDo you want to add line in File(y/n):");
        choice=getche();
    }
    printf("\nEntered data in the file(Encrypted):");
    rewind(f);
    while(fgets(name,256,f)!=NULL)
    {
        printf("%s",name);
    }
    printf("\nEntered data in the file(decrypted):");
    rewind(f);
    while(fgets(name,256,f)!=NULL)
    {
        i=0;
        while(name[i]!='\0')
        {
            name[i]=name[i]-128;
            i++;
        }
        printf("%s",name);
    }

    fclose(f);
}