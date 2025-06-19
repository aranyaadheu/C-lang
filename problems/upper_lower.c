#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90){
        printf("%c is an upper case Character.\n", ch);
    } else if (ch >= 97 && ch <= 122){
        printf("%c is a lower case Character.\n", ch);
    } else{
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}