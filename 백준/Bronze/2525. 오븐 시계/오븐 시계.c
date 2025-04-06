#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C, sec, H, M;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	sec = (A * 3600 + B * 60) + (C * 60);

	H = sec / 3600;
	M = (sec % 3600) / 60;

	if (M >= 60)
	{
		H += 1;
		M = 60 - M;
	}

	if (H >= 24)
	{
		H = 24 - H;
		if (H < 0)
		{
			H = -1 * H;
		}
	}

	printf("%d %d", H, M);

	return 0;
}