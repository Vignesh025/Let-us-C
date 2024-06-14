#include<stdio.h>

int main()
{
	int a[6][6], b[6][6], sum[6][6], i, j;

	printf("Enter first matrix.\n");

	for (i = 0; i<6; i++)
	{
		for (j = 0; j<6; j++)
			scanf("%d", &a[i][j]);
	}

	printf("\n\nEnter the second matrix.\n\n");

	for (i = 0; i<6; i++)
	{
		for (j = 0; j<6; j++)
			scanf("%d", &b[i][j]);
	}

	printf("\n\n\n");

	for (i = 0; i<6; i++)
		for (j = 0; j<6; j++)
			sum[i][j] = a[i][j] + b[i][j];

	for (i = 0; i<6; i++)
	{
		for (j = 0; j<6; j++)
			printf("%d ", a[i][j]);
		for (j = 0; j<6; j++)
		{
			if (i == 2 && j == 2)
				printf("+");
			else
				printf(" ");
		}
		for (j = 0; j<6; j++)
			printf("%d ", b[i][j]);
		for (j = 0; j<6; j++)
		{
			if (i == 2 && j == 2)
				printf("=");
			else
				printf(" ");
		}
		for (j = 0; j<6; j++)
		{
			if (sum[i][j]<9)
				printf(" ");
			printf("%d ", sum[i][j]);
		}

		printf("\n");
	}
}