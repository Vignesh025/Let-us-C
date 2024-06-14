#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2,*ft;
    char s[256];
    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");
    ft=fopen("mergetarget.txt","w");
    if(f1==NULL)
    {
        printf("Cannot open file1");
        exit(1);
    }
    if(f2==NULL)
    {
        printf("Cannot open file2");
        exit(2);
    }
    while(fgets(s,256,f1)!=NULL)
    {
        printf("%s",s);
    }
    while(fgets(s,256,f2)!=NULL)
    {
        printf("%s",s);
    }
    printf("\n\n"); 
    rewind(f1);
    rewind(f2);
    while(1)
    {
        if(feof(f1)==0)
        {
            fgets(s,256,f1);
            printf("%s",s);
            fputs(s,ft);
        }
        if(feof(f2)==0)
        {
            fgets(s,256,f2);
            printf("%s",s);
            fputs(s,ft);
        }
        if(feof(f1)!=0 && feof(f2)!=0)
        {
            break;
        }
    }
    rewind(ft);
    printf("\n\nData in target file:");
    while(fgets(s,256,ft)!=NULL)
    {
        printf("%s",s);
    }
    fclose(f1);
    fclose(f2);
    fclose(ft);
}