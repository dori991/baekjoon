#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, a, b, X, N;
	int cost = 0;

	scanf("%d", &X);
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		cost += a * b;
	}
	
	if (cost == X)
		printf("Yes");
	else
		printf("No");

	return 0;
}