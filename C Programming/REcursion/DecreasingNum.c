#include<stdio.h>
void decr(int a);
int main(){
 int n=6;
 decr(n);
 return 0;

}
void decr(int n){
    if(n==1){
        printf(" %d ",1);
        return;
    }
     printf(" %d ",n);
     decr(n-1);
     
}
