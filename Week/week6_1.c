#include <stdio.h>
int main()
{
    int n,s, m, h;
    int m0 = 0, s0 = 0;

    printf("Input\n");
    scanf("%d", &n);
    h = n / 3600;
    m= (n/60)%60;
    s = n % 60;
    printf("Output\n");
   printf("%d:%02d:%02d",h,m,s);

    return 0;
}