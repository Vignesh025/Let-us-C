#include<stdio.h>
int main()
{
    char ch,str[10];
    while((ch=getc(stdin))!=-1)
        putc(ch,stdout);
    return 0;
}