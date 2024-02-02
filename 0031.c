#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalServes;
    scanf("%d", &totalServes);

    int scoreKolya = 0, scoreVasya = 0, winsKolya = 0, winsVasya = 0;
    for (int i = 0; i < totalServes; i++)
    {
        char winner;
        scanf(" %c", &winner);

        if (winner == 'K') scoreKolya++;
        else scoreVasya++;

        if ((scoreKolya >= 11 || scoreVasya >= 11) && abs(scoreKolya - scoreVasya) >= 2)
        {
            if (scoreKolya > scoreVasya) winsKolya++;
            else winsVasya++;

            scoreKolya = scoreVasya = 0;
        }
    }

    printf("%d:%d\n", winsKolya, winsVasya);
    if (scoreKolya > 0 || scoreVasya > 0) printf("%d:%d\n", scoreKolya, scoreVasya);

    return 0;
}
