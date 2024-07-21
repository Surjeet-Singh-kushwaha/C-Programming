#include<stdio.h>
#include<string.h>

int main(){
    char myString[100]; // Assuming a maximum length of 99 characters
     
    printf("Enter a string: ");
   // scanf("%[^\n]s", myString); // First method to enter string
    //  gets(myString);
      gets(myString);
     // puts(myString); //For output String
   //  puts(s);
    printf("You Entered the string: %s\n",myString);
    printf("character at last index is: %c",myString[strlen(myString)-1]);
   // printf("Length of the String %d",strlen(myString));

 
   // printf("You Entered the string: "+strlen(s));

    return 0;
}
