#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int allSpots, shopEntrance;
    char parkingSpots[100000];
    scanf("%d %d", &allSpots, &shopEntrance);
    scanf("%s", parkingSpots);
    
    int leftSpot = shopEntrance - 1, rightSpot = shopEntrance - 1;
    while (1)
    {
        if (leftSpot >= 0 && parkingSpots[leftSpot] == '.')
        {
            printf("%d\n", leftSpot + 1);
            break;
        }
        
        if (rightSpot < allSpots && parkingSpots[rightSpot] == '.')
        {
            printf("%d\n", rightSpot + 1);
            break;
        }
        leftSpot--;
        rightSpot++;
    }
    return 0;
}
