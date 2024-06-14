#include<stdio.h>
#include<math.h>

int main()
{
    int arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    float s=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float mean=sum/n;
    for(int i=0;i<n;i++)
    {
        s=s+pow(arr[i]-sum,2);
    }
    float sd=sqrt(s)/n;
    printf("The standard deviation is:%f and The mean is:%f",sd,mean);

}