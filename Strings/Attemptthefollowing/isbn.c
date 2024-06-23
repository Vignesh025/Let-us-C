#include<stdio.h>
#include<string.h>

int main()
{
	char isbn[15];
	int i, sum = 0;
	printf("\nEnter 10 digit ISBN number : ");
	scanf("%s",isbn);
	for (i = 0; i <= 9; i++)
	{
		isbn[i] -= 48;
		sum = sum + ((i + 1)*isbn[i]);
	}
	if (sum % 11)
		puts("\nISBN number is wrong.");
	else
		puts("\nISBN number is valid.");
}