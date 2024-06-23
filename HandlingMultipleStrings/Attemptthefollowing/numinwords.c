#include<stdio.h>
#include<stdlib.h>
void print(int num);
void printB(int num);
int main()
{
    long int n,rem,res;
    printf("Enter a number:");
    scanf("%ld",&n);
    res=n/1000;
    n=n%1000;
    if(res>0)
    {
        if(res>=20)
        {
            printB(res);
        }
        else
        {
            print(res);
        }
        printf(" Thousands ");
    }
    res=n/100;
    n=n%100;
    if(res>0)
    {
        print(res);
        printf(" Hundred ");
    }
    res=n/10;
    n=n%10;
    if(res>0)
    {
        printf(" and ");
        printB(res);
    }
    printf(" ");
    print(n);

}
void printB(int num)
{
    int rem=num%10;
    num=num/10;
    switch(num)
    {
        case 2:
        printf("Twenty");
        break;
        case 3:
        printf("Thirty");
        break;
        case 4:
        printf("Fourty");
        break;
        case 5:
        printf("Fifty");
        break;
        case 6:
        printf("Sixty");
        break;
        case 7:
        printf("Seventy");
        break;
        case 8:
        printf("Eighty");
        break;
        case 9:
        printf("Ninety");
        break;
    }
    if(rem>0)
    {
        printf(" ");
        print(rem);
    }
}
void print(int num)
{
    switch(num)
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        case 10:
        printf("Ten");
        break;
        case 11:
        printf("Eleven");
        break;
        case 12:
        printf("Twelve");
        break;
        case 13:
        printf("Thirteen");
        break;
        case 14:
        printf("Fourteen");
        break;
        case 15:
        printf("Fifteen");
        break;
        case 16:
        printf("Sixteen");
        break;
        case 17:
        printf("Seventeen");
        break;
        case 18:
        printf("Eighteen");
        break;
        case 19:
        printf("Nineteen");
        break;
    }
}