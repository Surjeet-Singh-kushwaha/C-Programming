#include<stdio.h>
int fact(int a);
int main(){
 int n=5;
 printf("factroial of %d is : %d",n,fact(n));
 return 0;

}
int fact(int n){
    if(n==1|| n==0){
       
        return 1;
    }
     
     return n*fact(n-1);
}