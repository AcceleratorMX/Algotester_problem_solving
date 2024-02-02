#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int lviv, kyiv, donetsk, kharkiv, result;
    scanf("%d %d %d %d", &lviv, &kyiv, &donetsk, &kharkiv);

    result = lviv + kyiv + donetsk + kharkiv;

    printf("%d\n", result);
    return 0;
}
