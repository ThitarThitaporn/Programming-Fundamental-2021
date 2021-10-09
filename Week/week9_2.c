#include<stdio.h> 
int main()
{
    float num;
    float sqrt(float num);
    printf("Enter number : ");
    scanf("%f" , &num);
    printf("Ans. = %f",sqrt(num));
    
    return 0;
}

float sqrt(float num)
{
    float x[10000], Ans=0 ;
    for(int i = 0 ; i <= 10000 ; i++)
    {
        x[0]=1 ;
        x[i+1] = (x[i] + num / x[i])/2 ; 
        Ans = x[10000];
    }
     return Ans ;
}