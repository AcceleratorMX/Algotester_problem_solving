#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int sd, su, v;
    double td, tu;
    scanf("%d %d %d", &sd, &su, &v);

    td = (double)sd / v / 2;
    tu = 2 * (double)su / v;

    if (td < tu) printf("Down\n");
    else if (td > tu) printf("Up\n");
    else printf("Never mind\n");

    return 0;
}
