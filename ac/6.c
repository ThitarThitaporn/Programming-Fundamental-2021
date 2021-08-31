#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int isPrime(int);
int main()
{
    int x;
    scanf("%d", &x);
    if (isPrime(x) == 1)
        printf("Prime number");
    else
        printf("Not Prime number");
    return 0;
}
int isPrime(int a)
{

    if (( a % 2 != 0 ||a % 3 != 0 ||a % 5 != 0 || a % 7 != 0) && (a != 2 && a != 3 && a != 5 && a != 7))
        {
            return 0;
        }
       
else{
    return 1;
} 
    
   
  
}
//