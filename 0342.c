#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, r;
    scanf("%d %d %d %d", &a, &b, &c, &r);
    
    double perimeter = (a + b + c) / 2.0;
    double area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
    double outerRadius = a * b * c / (4.0 * area);

    if (outerRadius <= r) printf("+");
    else printf("-");
    
    double innerRadius = area / perimeter;
    if (innerRadius >= r) printf("+");
    else printf("-");
    
    return 0;
}
