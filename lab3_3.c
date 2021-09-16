#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j<= (num*2)-1; j++)
        {
          
        if( j<=i || j>(num*2)-1-i ){
            printf("* ");

        }
        else {
            printf("  ");
            
        }
            
        }
        printf("\n");
    }
    for (int i =num - 1;i>=1; i--)
    {
        for (int j =1; j<=num*2-1; j++)
        {
            if(j<=i ||j>(num*2)-1-i ){
                printf("* ");
            }
            else {
                printf("  ");
            }
            
        }
        printf("\n");

    
    }

   
    return 0;
}

 //ดูเครื่องหมาย <> ให้ดี ลองสมมุติว่าตัวเองเป็นคอม/ลองรันที่ละลูบดู 
