#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fs,*ft;
    char ch;
    fs=fopen("sourcecase.txt","r");
    if(fs==NULL)
    {
        printf("cannot open the source file");
        exit(1);
    }
    ft=fopen("targetcase.txt","w");
    if(ft==NULL)
    {
        printf("cannot open the target file");
        exit(2);
    }
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            if(ch>=97 && ch<=122)
            {
                ch=ch-32;
            }
            fputc(ch,ft);
        }
    }
    fclose(fs);
    fclose(ft);
    ft=fopen("targetcase.txt","r");
    if(ft==NULL)
    {
        printf("cannot open the target file");
        exit(2);
    }
    while(1)
    {
        ch=fgetc(ft);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            printf("%c",ch);
        }
    }
}