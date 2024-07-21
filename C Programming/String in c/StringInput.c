#include <stdio.h>
#include<string.h>

int main() {
    char myString[100]; // Assuming a maximum length of 99 characters

    printf("Enter a string: ");
    scanf("%s", myString);

    printf("You entered: %s\n", myString);
  printf("length of the string is %d ",strlen(myString));
    return 0;
}
