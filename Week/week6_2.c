#include<stdio.h>
int hour(int n,int h){
     h = n / 3600;
     printf("%02d:",h);
     
}

int min(int n,int m){

    m = (n/60)%60;
     printf("%02d:",m);
    
}

int second (int n,int s){
    s=n%60;
 printf("%02d",s);
}

int main()
{   
    int n,h,m,s;
    int m0 = 0, s0 = 0;
    printf("Input\n");
    scanf("%d", &n);
    printf("Output\n");
    hour(n,h);
    min(n,m);
    second(n,s);

    return 0;
}