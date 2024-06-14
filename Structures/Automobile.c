#include<stdio.h>
#include<string.h>

struct engine{
    char sl[4];
    int yom;
    char mat[20];
    int q;
};

int main()
{
    int n;
    printf("Enter the no. of parts:");
    scanf("%d",&n);
    struct engine e[100];
    for(int i=0;i<n;i++)
    {
        printf("Enter the serial no.:");
        scanf("%s",&e[i].sl);
        printf("Enter the year of manufacture:");
        scanf("%d",&e[i].yom);
        printf("Enter the material:");
        scanf("%s",&e[i].mat);
        printf("Enter the quantity:");
        scanf("%d",&e[i].q);
    }
    for(int i=0;i<n;i++)
    {
        if(strcmp(e[i].sl,"BB1")>=0 && strcmp(e[i].sl,"CC6")<=0)
        {
            printf("%s\t%d\t%s\t%d\n",e[i].sl,e[i].yom,e[i].mat,e[i].q);
        }
    }
}