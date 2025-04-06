#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	int cnt;
	cnt = N / 4;

	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("long ");
	}
	printf("int");

	return 0;
}