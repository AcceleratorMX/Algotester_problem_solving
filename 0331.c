#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    scanf("%s", s);

    int n = strlen(s);

    int count[26] = {0};
    for (int i = 0; i < n; i++)
        count[s[i] - 'a']++;

    int odd_count = 0;
    for (int i = 0; i < 26; i++)
        if (count[i] % 2 == 1) odd_count++;

    if (odd_count <= 1) printf("YES");
    else printf("NO");

    return 0;
}
