#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc,char *argv[50])
{
    FILE *fs,*fd;
    char word[50];
    fs=fopen(argv[3],"r");
    if(fs==NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    fd=fopen("replace.txt","w");
    if(fd==NULL)
    {
        printf("Error in file creation process.");
        exit(1);
    }
    while(fscanf(fs,"%s",word)!=EOF)
    {
        printf("%s",word);
        printf(" ");
        if(strcmp(word,argv[1])==0)
        {
            fprintf(fd,"%s",argv[2]);
            fputc(' ',fd);
        }
        else
        {
            fprintf(fd,"%s",word);
            fputc(' ',fd);
        }
    }
    fclose(fs);
    fclose(fd);
    remove(argv[3]);
    rename("replace.txt",argv[3]);
}