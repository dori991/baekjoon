#include <stdio.h>

int main(void)
{
    int n, A, B;

    scanf("%d", &n);

    int i = 0;
    int k;
    for (;;)
    {
        scanf("%d %d", &A, &B);
        k = A + B;
        printf("%d\n", k);
        i++;

        if (i >= n) break;
    }
    return 0;
}