#include<stdio.h>
int binary(int n){
    if(n<1){
        return 0;

    }
    else
    return n%2+binary(n/2)*10;
}

int octal(int n){
    if(n<1){
        return 0;
    }
    else 
    return n%8+octal(n/8)*10;
}
int decimal(int n, int pow ){
    if(n<1){
        return 0;
    }
    else 
    return (n%10)*pow+decimal(n/10,pow*2);
}
int main(){
    int n =4;
    int bin = binary(n);
    int dec= decimal(bin,1);
    printf("%d\n",bin);
    printf("%d\n",dec);
    printf("%d",octal(65));
    return 0;
}