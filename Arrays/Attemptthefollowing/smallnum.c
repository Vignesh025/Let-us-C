#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[25];
    printf("Enter the numbers:");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=&arr;
    int min=*ptr;
    for(int i=0;i<25;i++)
    {
        if(min>*ptr+1)
        {
            min=*ptr;
        }
        *ptr++;
    }
    printf("The smallest number is:%d",min);
}