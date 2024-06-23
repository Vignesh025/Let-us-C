#include<stdio.h>

int check(int *pos,int *neg,int *odd,int *even);
int main()
{
    int p=0,n=0,o=0,e=0;
    check(&p,&n,&o,&e);
    printf("No. of positive:%d\n",p);
    printf("No. of negative:%d\n",n);
    printf("No. of odd:%d\n",o);
    printf("No. of even:%d\n",e);
}
int check(int *pos,int *neg,int *odd,int *even)
{
    int arr[25];
    printf("Enter the numbers:");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<25;i++)
    {
        if(arr[i]>0)
        {
            *pos+=1;
        }
        else
        {
            *neg+=1;
        }
        if(arr[i]%2==0)
        {
            *even+=1;
        }
        else
        {
            *odd+=1;
        }
    }
}