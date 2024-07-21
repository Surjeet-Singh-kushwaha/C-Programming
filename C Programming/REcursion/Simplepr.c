#include<stdio.h>
 void fun(int n);
 int main(){
    fun(5);
    return 0;
 }
 void fun(int n){
    if(n==1){
        return;
    }
    printf("hello world\n");
    return fun(n-1);
 }