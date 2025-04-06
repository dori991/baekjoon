#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C, k1, k2, k3, k4;

	scanf("%d %d %d", &A, &B, &C);

	k1 = (A + B) % C;
	k2 = ((A % C) + (B % C)) % C;
	k3 = (A * B) % C;
	k4 = ((A % C) * (B % C)) % C;

	printf("%d\n%d\n%d\n%d\n", k1, k2, k3, k4);

	return 0;
}