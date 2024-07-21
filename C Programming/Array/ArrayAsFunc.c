#include<stdio.h>
#include<conio.h>
int fun(int arr[], int n);
int main(){
    int Arr[] = {30, 40, 10 ,50};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    printf("Sum of all element : %d", fun(Arr,n));
return 0;
}
int fun(int arr[], int n){
    int sum =0;
    for(int i =0; i<n;i++){
     sum+=arr[i];
    }
    return sum;
}