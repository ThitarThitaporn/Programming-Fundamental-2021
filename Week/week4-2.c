#include <stdio.h>
int main()
{
    int dec;
    int bin[100];
    int i = 0, j;
    scanf_s("%d", &dec);

    do
    {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    
    } 
    while (dec > 0);
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    return 0;
}