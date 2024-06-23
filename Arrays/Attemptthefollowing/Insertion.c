#include<stdio.h>

int insertionsort(int arr[])
{
    for(int i=0;i<25;i++)
    {
        int a=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>a)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=a;
    }
}
int main()
{
    int arr[25];
    printf("Enter the numbers:");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionsort(arr);
    for(int i=0;i<25;i++)
    {
        printf("%d ",arr[i]);
    }
}