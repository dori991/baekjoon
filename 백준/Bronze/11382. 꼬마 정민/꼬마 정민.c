#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long A, B, C, value;
	scanf("%lld %lld %lld", &A, &B, &C);

	value = A + B + C;

	printf("%lld", value);

	return 0;
}