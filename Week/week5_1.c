// มีคนทั้งหมด n คน ทุกคนต้องการแลกบัตรอวยพรให้กันและกัน ต้องใช้บัตรทั้งหมดกี่ใบ (Level 3)
#include<stdio.h>
int main(){
     int num;
     scanf_s("%d",&num);
     printf("%d",num*(num-1));
     return 0;
}