#include<stdio.h>
#include<ctype.h>
enum DAY {MONDAY=1 , TUESDAY , WEDNESDAY,THURSDAY, FRIDAY, SATURDAY, SUNDAY };
int main(){
    enum DAY day = 5;
   printf("%d",day);
}