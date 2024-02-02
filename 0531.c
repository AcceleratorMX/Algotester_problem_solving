#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int k, n, count = 0, c[1000]; 
    scanf("%d %d", &k, &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &c[i]);
    
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (c[j] > c[j + 1])
            {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
    
    for (int i = 0; i < n; i++)
        if (k >= c[i])
        {
            k -= c[i];
            count++;
        }
        else break;

    printf("%d\n", count);
    return 0;
}
