#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char num1[100], num2[100];
    int counter = 0;

    scanf("%s", num1);
    scanf("%s", num2);

    if (num1[strlen(num1) - 2] == 'y') counter++;
    
    if (num2[strlen(num2) - 2] == 'y') counter++;

    for (int i = 1; i < strlen(num1); i += 2)
        if (num1[i] == 'u') printf("ku");
        
    for (int i = 1; i < strlen(num2); i += 2)
        if (num2[i] == 'u') printf("ku");
    
    if (counter == 1) printf("kyu");
    else if (counter == 2) printf("ku");

    return 0;
}
