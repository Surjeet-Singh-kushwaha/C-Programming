#include<stdio.h>
#include<stdlib.h>
int main(){
    // int *arr =(int*)calloc(5,sizeof(int));
    int *arr =(int*)malloc(5*sizeof(int));
    for(int i =0;i<5;i++){
        arr[i]=i+5;
        printf("%d ",arr[i]);
    }
    free(arr);
}