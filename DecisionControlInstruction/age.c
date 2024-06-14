#include<stdio.h>
int main()
{
    int Ram,Shyam,Ajay;
    printf("Enter the age of Ram:");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam:");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay:");
    scanf("%d",&Ajay);
    if(Ram<Shyam && Ram<Ajay)
    {
        printf("Ram is the Youngest");
    }
    else if(Shyam<Ram && Shyam<Ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
}