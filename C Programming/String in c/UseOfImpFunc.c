#include<stdio.h>
#include<ctype.h>
int main(){
    char s ='s';
    char s1 ='S';
    char s2 ='9';
    char s3 ='(';
    printf("%d \n",isdigit(s2));//0
    printf("%d\n",islower(s2));// if true more than 0
    printf("%d\n",isupper(s2));// false 0
    printf("%d\n",isalpha(s));// true more than 0
    printf("%d\n",iswspace(s2));// true
    

    return 0;
}