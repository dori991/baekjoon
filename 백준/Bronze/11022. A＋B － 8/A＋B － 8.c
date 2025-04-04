#include <stdio.h>

int main(void)
{
	int A, B, T, k;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		k = A + B;
		printf("Case #%d: %d + %d = %d\n",i, A, B, k);
	}

	return 0;
}