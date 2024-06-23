#include<stdio.h>

int main()
{
    int p=100000;
    int arr[11];
    for(int i=10;i>0;i--)
    {
        int a=0.1*p;
        int b=p-a;
        arr[i]=b;
        p=b;

    }
    for(int i=1;i<=10;i++)
    {
        printf("The population at the end of year %d is:%d\n",i,arr[i]);
    }
}