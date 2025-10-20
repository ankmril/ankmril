#include <stdio.h>
#include <ctype.h>
int main() {
    char x;
    printf("Enter a character\n");
    scanf("%c",&x);
    switch(x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel.\n");
        break;
        default:
        if(isdigit(x))
            printf("Please enter a character and try once again.\n");
        else
            printf("Consonant.\n");
        break;
    }
    return 0;
}