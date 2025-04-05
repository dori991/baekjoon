#include <stdio.h>

int main(void)
{

	int N, i, j, k, l;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N - i; j++)
		{

			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		for (l = 1; l <= i - 1; l++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= N - 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= N - i; k++)
		{
			printf("*");
		}
		for (l = 1; l <= N - i - 1; l++)
		{
			printf("*");
		}
		printf("\n");
	}
}