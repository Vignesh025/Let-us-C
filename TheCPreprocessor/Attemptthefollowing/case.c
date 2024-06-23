#include<stdio.h>

#define CASE(c) (c+32)

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("The lowercase alphabet of %c is %c",ch,CASE(ch));
}