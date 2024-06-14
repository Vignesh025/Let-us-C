#include<stdio.h>

struct account{
    int accno;
    char name[50];
    int bal;
};
int Printinsuff(struct account[]);
int Printmessage(int,struct account[],int);
int main()
{
    int acc,j,am;
    struct account a[]={
        {12001,"Alex",1500},
        {12002,"Mathew",999},
        {12003,"Peter",1780},
        {12004,"Mark",1880},
        {12005,"John",2500},
        {12006,"Thomas",500},
        {12007,"Luke",1900},
    };
    Printinsuff(a);
    printf("Enter Your accno:");
    scanf("%d",&acc);
    printf("Enter 0 for withdrawal and 1 for deposit:");
    scanf("%d",&j);
    printf("Enter an amount:");
    scanf("%d",&am);
    if(j==0)
    {
        Printmessage(acc,a,am);
    }

}
int Printinsuff(struct account a[])
{
    for(int i=0;i<7;i++)
    {
        if(a[i].bal<1000)
        {
            printf("%d\t%s\n",a[i].accno,a[i].name);
        }
    }
}
int Printmessage(int acc,struct account a[],int am)
{
    for(int i=0;i<7;i++)
    {
        if(acc==a[i].accno)
        {
            if(a[i].bal-am<1000)
            {
                printf("The balance is insufficient for the specified withdrawal");
            }
        }
    }
}