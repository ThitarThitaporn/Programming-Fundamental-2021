#include <stdio.h>
int main()
{
    int num[3], max, min;

    for (int i = 0; i <= 2; i++)
    {
        printf("Enter number.%d : ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i <= 2; i++)
    {

        if (i == 0)
        {
            max = num[i];
            min = num[i];
        }
        else if (num[i] > max)
        {
            max = num[i];
        }
        else if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("The maximam is %d", (num[0] + num[1] + num[2]) - min);

    return 0;
}