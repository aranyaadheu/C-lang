// upper case or lower case
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Upper case\n");
    } else if (ch >= 'a' && ch <= 'z'){
        printf("Lower case\n");
    } else{
        printf("Invalid character!\n");
    }

    return 0;
}