#include <stdio.h>

int main(void)
{
	int N, X, i;
	int A[10000];

	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			printf("%d ", A[i]);
		}
	}

	return 0;
}