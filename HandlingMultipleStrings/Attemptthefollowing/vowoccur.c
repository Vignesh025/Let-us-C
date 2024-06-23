#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a sentence:");
    scanf("%s",str);
    int n=strlen(str);
    int count=0;
    for (int i = 0; i < n; i++) {
        if ((str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')&&(str[i+1]=='A' || str[i+1]=='E' || str[i+1]=='I' || str[i+1]=='O' || str[i+1]=='U' || str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u'))
        {
            count++;
        }
    }
    printf("%d",count);
}