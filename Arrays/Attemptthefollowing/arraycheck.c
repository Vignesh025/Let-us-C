#include<stdio.h>
#include<stdlib.h>

int check(int *arr,int n);
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    check(arr,n);
}
int check(int *arr,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[n-(i+1)])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}