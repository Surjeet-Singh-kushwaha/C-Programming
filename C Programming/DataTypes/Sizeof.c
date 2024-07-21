#include<stdio.h>
struct student
{
    char name[10];
    int age;
} st;

int main(){
    printf("size of int =  %lu\n",sizeof(int));
    printf("size of char = %lu\n",sizeof(char));
    printf("size of float =%lu\n",sizeof(float));
    printf("size of double= %lu\n",sizeof(double));
    printf("size of short = %lu\n",sizeof(short));
    printf("size of int* =  %lu\n",sizeof(int*));
    printf("size of student =   %lu\n",sizeof(st.name));
    printf("size of int =   %lu\n",sizeof(int));
    printf("size of int =   %lu\n",sizeof(int));
    printf("size of int =   %lu\n",sizeof(int));
    printf("size of int =   %lu\n",sizeof(int));
    printf("size of int =   %lu\n",sizeof(int));
    return 0;
}