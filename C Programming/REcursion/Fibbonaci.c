#include<stdio.h>
int fib(int a);
void fibbonaciseries(int n);
int main(){
 int n=5;
 fibbonaciseries(n);
 return 0;

}
 int fib(int n){
    if(n==1|| n==0){
      
        return n;
    }
     
      return fib(n-1)+fib(n-2);
     
}
void fibbonaciseries(int n){
    if(n<0){
        return;
    }
       
     fibbonaciseries(n-1);
      printf(" %d ", fib(n));
}