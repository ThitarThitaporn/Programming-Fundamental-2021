#include<stdio.h>
int main(){
	int input,sum = 0;
	scanf("%d",&input);
	
	
	while(input>9){
		while(input>9){
		sum += input%10;
		input /= 10;
		}
		
		sum+=input%10;
        printf("%d\n",sum);
        input=sum;
		sum=0;
     
	}
	


}
