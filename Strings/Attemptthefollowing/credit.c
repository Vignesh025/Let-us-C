#include<stdio.h>
#include<string.h>

int main()
{
    char num[20];
    int sum=0;
    printf("Enter the number:");
    scanf("%s",num);
    for(int i=0;i<16;i++)
    {
        num[i]=num[i]-48;
        if(num[i]%2==0)
        {
            sum+=num[i];
        }
        else
        {
            num[i]*=2;
            if(num[i]>10)
            {
                num[i]-=9;
            }
            sum+=num[i];
        }
    }
    if(sum%10==0)
    {
        printf("It is valid");
    }
    else
    {
        printf("It is not valid");
    }
}