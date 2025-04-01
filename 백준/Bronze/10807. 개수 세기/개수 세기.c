#include <stdio.h>

int main(void)
{
	int N, i, v;
	int A[100];
	int cnt = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	scanf("%d", &v);

	for (i = 0; i < N; i++)
	{
		if (A[i] == v)
		{
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}