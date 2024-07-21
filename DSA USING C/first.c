#include<stdio.h>
int main()
{
    int a, b ,s=0;
    printf("enter two numbers: \n");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("sum of %d and %d is: %d ",a,b,s);
    return 0;
}