#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter number1 :");
    scanf("%d", &num1);
    printf("Enter number2 :");
    scanf("%d", &num2);
    printf("Enter number3 :");
    scanf("%d", &num3);

    if ((num1 + num2) > (num2 + num3)&&(num1 + num2)>(num3+num1))
    {
        printf("The maximam is %d", num1 + num2);
    }
    else if ((num2 + num3) > (num1 + num2)&&(num2+num3)>(num3+num1))
    {
        printf("The maximam is %d", num2 + num3);
    }
    else
    {
        printf("The maximam is %d", num3 + num1);
    }
    return 0;
}
