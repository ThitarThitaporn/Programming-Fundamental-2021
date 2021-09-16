#include <stdio.h>
int main()
{
    int num , sum=0;
    for(num=1,sum=0;num<=10000;num++,sum=0){
          for (int i = 1; i < num; i++){
              if (num % i == 0){
            sum+=i;
              }
              
          }
        if(num == sum){
            
            printf("%d ",num );}

        
        
    } 
    return 0;
}