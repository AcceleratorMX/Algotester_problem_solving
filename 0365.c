#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, temp, count = 1;
    int numbers[100000];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N - 1; i++)
        if (numbers[i] < numbers[i + 1]) count++;
    
    printf("%d", count);
    return 0;
}
