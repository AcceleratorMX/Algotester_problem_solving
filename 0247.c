#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000

int main()
{
    int n, s;
    int a[SIZE], b[SIZE];
    scanf("%d %d", &n, &s);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++)
        s -= abs(a[i] - b[i]);

    printf("%d\n", s);
    return 0;
}
