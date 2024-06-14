#include<stdio.h>
#include<stdlib.h>

int modify(int arr[],int n);
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    modify(arr,n);
    printf("The numbers are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int modify(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*3;
    }
}