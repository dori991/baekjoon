#include <stdio.h>

int main(void)
{
	int a, b;
	int b1, b2, b3;
	int k1, k2, k3;
	scanf("%d %d", &a, &b);
	
	b1 = b % 10;
	b2 = (b % 100) / 10;
	b3 = b / 100;

	k1 = a * b1;
	k2 = a * b2;
	k3 = a * b3;

	printf("%d\n", k1);
	printf("%d\n", k2);
	printf("%d\n", k3);
	printf("%d\n", k1 + k2 * 10 + k3 * 100);

	return 0;
}