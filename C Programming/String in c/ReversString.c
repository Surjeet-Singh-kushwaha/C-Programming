#include<stdio.h>
#include<conio.h>
#include<string.h>

 int main(){
    char str1[100];
    char str2[100];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);

    printf("both string: %s", strcat(str1,str2));
//     printf("\nYou Enter the string is: %s\n", str);
// 
//     int strLastIndex = strlen(str)-1;
//     int i =0;
//     for(i=0;i<=strLastIndex/2;i++){
//         char c = str[i];
//         str[i]=str[strLastIndex-i];
//         str[strLastIndex-i]=c;
//      }
//  puts(str);
    return 0;
 }