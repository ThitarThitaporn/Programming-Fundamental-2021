#include<stdio.h>
int main(){
    int j;
    printf("Enter number : ");
    scanf("%d",&j);
    printf("Factoring Result : ");
    for(int i=2 ; i<j; i++)
    {
        if(j % i == 0)
        {
            printf ("%d x ",i);
            j /= i; 
            i=1;
        }

    }
    printf("%d",j);
    return 0;
}