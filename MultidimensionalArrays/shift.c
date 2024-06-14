#include<stdio.h>

void shift(int *base)
{
	int *web, fir, sec, i;
	web = base;
	fir = *base;
	sec = *(base + 1);

	for (i = 0; i<3; i++)
		*(web + i) = *((base + 2) + i);

	*(web + 3) = fir;
	*(web + 4) = sec;
}

int main()
{
	int a[5], i;
    int b[4][5];
	printf("Enter 5 numbers : ");
	for (i = 0; i<5; i++)
    {
		scanf("%d", &a[i]);
    }
    printf("Enter the numbers for matrix:");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
	shift(a);
    shift(b);

	printf("\n\nList after shifting it's rows by two positions.\n\n");
	for (i = 0; i<5; i++)
    {
		printf("%d ", a[i]);
    }
    printf("The matrix looks like:");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d",&b[i][j]);
        }
    }
}