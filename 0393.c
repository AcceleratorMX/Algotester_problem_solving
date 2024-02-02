#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cellsCount = 0;
    for (int i = 1; i <= n; i++)
        cellsCount += i * i;

    printf("%d\n", cellsCount);

    return 0;
}
