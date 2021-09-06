// มีคนทั้งหมด n คน ทุกคนต้องการแลกบัตรอวยพรให้กันและกัน ต้องใช้บัตรทั้งหมดกี่ใบ (Level 3)
#include<stdio.h>
int ExchCard(int);
int main(){
    int num;
     scanf_s("%d",&num);
     ExchCard(num) ;  
}

int ExchCard (int i)
{
    i = i*(i-1);
    printf("%d",i);
    return 0;

}