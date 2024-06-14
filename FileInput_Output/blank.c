#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    FILE *fs,*fd;
    char word[30],sent[1000001];
    fs=fopen("text.txt","r");
    fd=fopen("destination.txt","w");
    while(1)
    {
        fscanf(fs,"%s",word);
        if(strcmp(word,"a")==0)
        {
            strcpy(word," ");
        }
        else if(strcmp(word,"an")==0)
        {
            strcpy(word," ");
        }
        else if(strcmp(word,"the")==0)
        {
            strcpy(word," ");
        }
        fprintf(fd,"%s",word);
        if(feof(fs))
        {
            break;
        }
    }
    fclose(fs);
    fclose(fd);
    fd=fopen("destination.txt","r");
    while(1)
    {
        fscanf(fs,"%s",word);
        printf("%s",word);
        if(feof(fd))
        {
            break;
        }
    }
}