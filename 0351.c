#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, k, result = 0;
    scanf("%d%d", &n, &k);

    for (int i = 2; i <= n; i++)
        result = (result + k) % i;

    printf("%d", result + 1);
    return 0;
}
