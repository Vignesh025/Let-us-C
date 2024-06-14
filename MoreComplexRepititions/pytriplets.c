#include<stdio.h>
#include<math.h>

int main()
{
    for(int i=1;i<=30;i++)
    {
        for(int j=1;j<=30;j++)
        {
            for(int k=1;k<=30;k++)
            {
                if(pow(i,2)==pow(j,2)+pow(k,2)||pow(j,2)==pow(i,2)+pow(k,2)||pow(k,2)==pow(j,2)+pow(i,2))
                {
                    printf("The triplets are:%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
}