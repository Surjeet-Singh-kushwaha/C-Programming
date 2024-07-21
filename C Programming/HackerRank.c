#include <stdio.h>

int main() 
{
    char ch;
    char s[100];
    char sen[500];

    scanf(" %c", &ch);  // Note the space before %c to consume leading whitespaces

    scanf(" %[^\n]", s);
    scanf(" %[^\n]", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}
