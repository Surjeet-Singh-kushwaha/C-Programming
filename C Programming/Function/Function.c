#include<stdio.h>
#include<conio.h>
int sum(int a , int b);
void main(){
int a =5;
int b=6;
printf("Sum of %d and %d is: %d",a,b,sum(a,b));

}

int sum(int a , int b){
    return a+b;
}