#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *b;
    *b = *a;
    *a = c;
}

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
}

// loop B>C>A 