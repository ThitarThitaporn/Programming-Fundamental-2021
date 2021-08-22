#include<stdio.h>
int main(){
    long int b=0,n;
    scanf("%ld",&n);
    while(n>9){
        while(n>9)
        {
            b+=n%10;
            n/=10;
        }
        b+=n%10;
        printf("%ld\n",b);
        n=b;
        b=0;
        
    }

}