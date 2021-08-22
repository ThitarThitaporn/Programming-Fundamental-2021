#include <stdio.h>

int main()
{
    float num[5], sum = 0; 
    printf("Enter height\n");

    for (int i = 0; i <= 4; i++)
    {

        scanf("%f", &num[i]);
        sum += num[i];
    }
    sum /= 5;
    printf("%.2f %.2f %.2f %.2f %.2f", num[0], num[1], num[2], num[3], num[4]);
    printf("\nThe average is %.2f", sum);
    return 0;
}