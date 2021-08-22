#include<stdio.h>
int main(){
	int input,sum = 0,sum2=0;
	scanf("%d",&input);
	while(input){
		sum += input%10;
		input /= 10;
	}
	printf("%d",sum);
	
	while(sum>0){
		sum2 += sum%10;
		sum /=10;
	}
	printf("\n%d",sum2);
	return 0;
}