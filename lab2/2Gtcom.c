#include<stdio.h>
int main()
{
    int num1,num2,A ;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
     if(num1<num2)
     {
         A=num1;
     }
     else
    {
        A=num2;
    }
    for(int i =A;i>=1;i--){
        if(num1%i == 0 && num2%i == 0){
            printf("%d ",i);
            break;
        }
    }

    

   
    return 0;
    
}