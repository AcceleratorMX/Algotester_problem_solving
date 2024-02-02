#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, array[1000];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max) max = array[i];

    printf("%d\n", max);
    return 0;
}

