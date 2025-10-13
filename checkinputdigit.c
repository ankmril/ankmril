#include <stdio.h>
int main() {
    char ch;
    printf("Enter your input\n");
    scanf("%c",&ch);
    int isDigit=(ch>='0')&&(ch<='9');
    char*result[]={"Not a digit", "Digit"};
    printf("%s\n", result[isDigit]);
    return 0;
}