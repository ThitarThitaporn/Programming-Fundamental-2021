#include <stdio.h>
int main()
{
  int dec,bin=0,m,n=1;
  scanf_s("%d",&dec);
  for(int i=dec;i>0;i=i/2){
      m=i%2;
      bin = bin +(m*n);
      n=n*10;
  }
  printf("%d",bin);
  return 0;
}