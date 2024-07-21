#include<stdio.h>
int main(){
    short s =20;
    int i =50;

    printf( "s= %d, i =%i\n",s,i);
     printf( "s= %4d, i =%4i\n",s,i);
 char ch = 'C';
 printf("ch = %c, ch=%i \n", ch,ch);
//  printf("ch = %s, ch=%i \n", ch,ch);
 // float and double data type
 float f = 30;
 double d = 34;
 printf(" f =%.2f, d= %.2lf\n",f,d);
 char myText = 'Hello';
printf("%c", myText);
float f1 = 35e3;
double d1 = 12E4;

printf("%f\n", f1);
printf("%lf", d1);
}