#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n,  parity, temp = -1, counter = 0;
    int array[100000];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for ( int i = 0; i < n; i++)
    {
        parity = array[i] % 2;
        if (temp != -1 && parity != temp) counter++;

        temp = parity;
    }
    printf("%d", counter);
    return 0;
}
