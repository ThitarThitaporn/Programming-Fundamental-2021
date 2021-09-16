#include <stdio.h>

int main()
{
    int squareSize, row, col;

    printf("  Enter number for square size  : ");
    scanf("%d", &squareSize);

    for (row = 0; row < squareSize; row++)
    {
        if (row == 0 || row == squareSize - 1)
        {
            printf("\t*");
            for (col = 0; col < squareSize - 1; col++)
            {
                printf(" *");
            }
            printf("\n");

            continue;
        }

        printf("\t* ");

        for (col = 0; col < squareSize - 2; col++)
        {
            printf("  ");
        }

        printf("*\n");
    }

    return 0;
}