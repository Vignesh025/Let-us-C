#include<stdio.h>
#include<string.h>
struct library{
    char anum[6];
    char title[20];
    char aname[20];
    int price;
    int flag;

};
int Addbook(struct library[],int);
int Displaybook(struct library[],int);
int Listauthor(struct library[],char[],int );
int Listanum(struct library[],char[],int );
int sort();
int main()
{
    int c,count=0;
    char author[20],num[6];
    struct library l[100];
    printf("1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of book specified by accession number\n5. List the count of books in the library\6. List the books in the order of accession number\n7. Exit\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Add book information");
            Addbook(l,count);
            count++;
            break;
        case 2:
            printf("Display book information");
            Displaybook(l,count);
            break;
        case 3:
            printf("List all books of given author");
            printf("Enter an author name:");
            scanf("%s",author);
            Listauthor(l,author,count);
            break;
        case 4:
            printf("List the title of book specified by accession number");
            printf("Enter an accession number:");
            scanf("%s",num);
            Listanum(l,num,count);
            break;
        case 5:
            printf("List the count of books in the library");
            printf("%d",count);
            break;
        case 6:
            printf("List the books in the order of accession number");
            break;
        case 7:
            printf("Exit");
            break;

    }
}
int Addbook(struct library l[],int count)
{
    printf("Enter accession number:");
    scanf("%s",l[count].anum);
    printf("Enter the title of the book:");
    scanf("%s",l[count].title);
    printf("Enter the author name:");
    scanf("%s",l[count].aname);
    printf("Enter the price of the book:");
    scanf("%d",&l[count].price);
    l[count].flag=0;
}
int Displaybook(struct library l[],int count)
{
    for (int i = 0; i < count; i++)
    {
    printf("%s\t%s\t%s\t%d\t%d\n",l[i].anum,l[i].title,l[i].aname,l[i].price,l[i].flag);
    }   
}
int Listauthor(struct library l[],char author[],int count)
{
    for(int i=0;i<count;i++)
    {
        if(strcmp(author,l[i].aname)==0)
        {
            printf("%s",l[i].title);
        }
    }
}
int Listanum(struct library l[],char num[],int count)
{
    for(int i=0;i<count;i++)
    {
        if(strcmp(num,l[i].anum)==0)
        {
            printf("%s",l[i].title);
        }
    }
}
