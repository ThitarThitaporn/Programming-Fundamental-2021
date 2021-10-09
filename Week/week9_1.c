#include <stdio.h>
int main()
{

    float num;
    float x[10000], Ans = 0;
    printf("Enter number : ");
    scanf("%f", &num);
    for (int i = 0; i <= 10000; i++)
    {
        x[0] = 1;
        x[i + 1] = (x[i] + num / x[i]) / 2;
        Ans = x[10000];
    }
    printf("Ans. =  %f", Ans);
    return 0;
}