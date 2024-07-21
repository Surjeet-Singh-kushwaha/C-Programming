#include<stdio.h>
 void fun(int n,int i);
 int main(){
    fun(5,1);
    return 0;
 }
 void fun(int n, int i){
  
    if(i==11){
        return;
    }
    printf("%d * %d = %d\n",n,i,n*i);
   
    return fun(n,i+1);
 }