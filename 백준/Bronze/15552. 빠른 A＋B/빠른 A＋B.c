#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T, i, A, B;
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}