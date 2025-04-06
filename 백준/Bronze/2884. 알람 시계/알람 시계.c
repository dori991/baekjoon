#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int H, M, H1, M1, sec, alarm;
	scanf("%d %d", &H, &M);

	sec = H * 3600 + M * 60;
	alarm = sec - (45 * 60);

	H1 = alarm / 3600;
	M1 = (alarm % 3600) / 60;

	if (M1 < 0)
	{
		H1 = 23;
		M1 = 60 + M1;
	}

	printf("%d %d", H1, M1);

	return 0;
}