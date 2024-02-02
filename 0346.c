#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 1000000

//print(sum(map(int, input().split()))) - for python

int main()
{
    char a[SIZE], b[SIZE], sum[SIZE];
    scanf("%s %s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);
    int lenSum = lenA > lenB ? lenA : lenB;
    sum[lenSum + 1] = '\0';

    int digitA, digitB, digitSum, carry = 0;
    for (int i = 0; i < lenSum; i++)
    {
        digitA = i < lenA ? a[lenA - i - 1] - '0' : 0;
        digitB = i < lenB ? b[lenB - i - 1] - '0' : 0;
        digitSum = digitA + digitB + carry;
        sum[lenSum - i] = digitSum % 10 + '0';
        carry = digitSum / 10;
    }
    if (carry > 0) sum[0] = carry + '0';
    printf("%s\n", (carry > 0) ? sum : sum+1);
    
    return 0;
}
