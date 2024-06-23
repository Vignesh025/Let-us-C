#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int small=99999,large=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    int r=large-small;
    printf("The range of integers is:%d",r);
}