#include<stdio.h>
int main()
{
    int i,j,m,n,a[3][3],b[3][3];
    scanf("%d %d",&m,&n);
    collect(a,m,n);   
    collect(b,m,n); 
    printf("Result :\n");
    for(i = 0 ; i<m ; i++)
    {
        for(j = 0 ; j<n ; j++)
        {
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}

void collect(int (*c)[3] , int m , int n)
{
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            scanf("%d",(*(c+i)+j));
        }
    }
}