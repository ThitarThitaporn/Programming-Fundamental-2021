#include<stdio.h>
int main(){
    float  a,b,c,d,e,x;
    printf("Enter height\n");
    scanf("%f\n%f\n%f\n%f\n%f", &a,&b,&c,&d,&e);
    printf("%.2f %.2f %.2f %.2f %.2f",a,b,c,d,e);
    x=(a+b+c+d+e)/5;
	printf("\nThe average is %.2f",x); 
    return 0;	

}