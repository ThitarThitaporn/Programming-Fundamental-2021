#include<stdio.h>
#int CountTime(int,int,int);
int main()
{
    int s, m, h;
    int m0 = 0, s0 = 0;    
    printf("Input\n");
    scanf("%d", &s);
    CountTime(s,m,h);
    printf("Output\n");
    if (m >= 0 && m <= 9)
    {
        printf("%d:%d%d:", h, m0, m);
        if (s >= 0 && s <= 9)
        {
            printf("%d%d", s0, s);
        }
        else
        {
            printf("%d", s);
        }
    }
    else
    {
        printf("%d:%d:%d", h, m, s);
    }
    return 0;
}

int CountTime(int s,int m,int h){
    h = s / 3600;
    m = (s - (h * 3600)) / 60;
    s = s % 60;
    
}