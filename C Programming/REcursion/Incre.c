#include<stdio.h>
void incr(int a);
int main(){
 int n=6;
 incr(n);
 return 0;

}
void incr(int n){
    if(n==1){
        printf(" %d ",1);
        return;
    }
     
      incr(n-1);
     printf(" %d ",n);
     
}
