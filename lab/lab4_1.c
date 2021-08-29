#include <stdio.h>
#include <math.h>
int main()
{
    float l1, l2, l3, s, area;
    scanf_s("%f %f %f", &l1, &l2, &l3);
    s = (l1 + l2 + l3) / 2;
    area = sqrt((s * (s - l1)) * (s - l2) * (s - l3));

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
    {
        printf("%f", area);
    }
    else
    {
        printf("0");
    }
    return 0;
}