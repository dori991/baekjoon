#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i;
	int sum = 0;
	char a[101];

	scanf("%d", &N);
	scanf(" %s", a);

	for (i = 0; i < N; i++)
	{
		a[i] = a[i] - '0';
		sum += a[i];
	}

	printf("%d", sum);


	return 0;
}