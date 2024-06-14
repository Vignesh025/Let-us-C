#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p=0,ne=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0)
        {
            ne++;
        }
        else if(arr[i]==0)
        {
            z++;
        }
    }
    printf("The number of \nPositive: %d\nNegative: %d\nZeros: %d",p,ne,z);
}