#include<stdio.h>

int main()
{
    int i=0;
    while(i<=255)
    {
        printf("The equivalent character for the ascii value of %d is %c\n",i,i);
        i++;
    }
}