#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int defaultArray[1000];
    int newArray[1000];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &defaultArray[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &newArray[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (defaultArray[i] != newArray[n - i - 1])
        {
            printf("No\n");
            for (int j = n - 1; j >= 0; j--)
                printf("%d ", defaultArray[j]);
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
