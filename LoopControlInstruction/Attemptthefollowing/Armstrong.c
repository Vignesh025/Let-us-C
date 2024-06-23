#include<stdio.h>
#include<math.h>
int main()
{
    int num, temp, rem=0, sum=0, i;
    float cube;
    num = 1;
    temp = 1;
    for(i=1;i<=500;i++)
    {
        while(num!=0)
        {
            rem = num%10;
            cube = pow(rem,3);
            sum = sum + cube;
            num = num/10;
        }
        if(sum == temp)
            printf("%d\n",temp);
        rem = 0;
        sum = 0;
        cube = 0;
        temp = i+1;
        num = i+1;
    }

}