#include <stdio.h>
int main()
{
    int num, row, col;
    printf("Enter number : ");
    scanf("%d", &num);
    for (row = 0; row < num; row++)
    {
       
 
        for(col=0;col<num;col++){
           
            if(col==0 || col==num-1 || row==0 || row==num-1){
            printf("*");
            }

            else{
                printf(" ");
            }

        }printf("\n");
    } 
    return 0;
}