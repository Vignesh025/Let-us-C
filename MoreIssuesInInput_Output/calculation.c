#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int n,m;
    char o;
    if(argc!=4)
    {
        printf("Please pass all arguments.");
        exit(1);
    }
    o=*argv[1];
    n=atoi(argv[2]);
    m=atoi(argv[3]);
    switch(o)
    {
        case '+':
            printf("%d",n+m);
            break;
        case '-':
            printf("%d",n-m);
            break;
        case 'x':
            printf("%d",n*m);
            break;
        case '/':
            printf("%d",n/m);
            break;
        case '%':
            printf("%d",n%m);
            break;
        case 'l':
            if(n<m)
                printf("True");
            else
                printf("False");
            break;
        case 'g':
            if(n>m)
                printf("True");
            else
                printf("False");
            break;
        default:
            printf("No choice found.");
    }
    return 0;
}