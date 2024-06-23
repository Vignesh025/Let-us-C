#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], ans[3][3];
	int i, j, x;

	printf("Enter the first 3 by 3 matrix.\n\n");
	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			scanf("%d", &a[i][j]);
	printf("\n\nEnter the second 3 by 3 matrix.\n\n");
	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			scanf("%d", &b[i][j]);
	
	for (x = 0; x<3; x++)
	{
		for (i = 0; i<3; i++)
		{
			ans[x][i] = 0;
			for (j = 0; j<3; j++)
            {
				ans[x][i] = ans[x][i] + a[x][j] * b[j][i];
            }
		}
	}

	printf("\n\nProduct of the matrices is.\n\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}

}