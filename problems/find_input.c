// Find if an input is Alphabet, digit or Special Character.
// Alphabet (A-Z) or (a-z) or Digit(0-9) or Special Character 
#include <stdio.h>

int main(void) {
// solve this using ASCII value
/*
ASCII values:
A-Z ----> 65 to 90
a-z ----> 97 to 122
0-9 ----> 48 to 57
*/
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        printf("%c is an Alphabet.\n", ch);
    } else if(ch >= 48 && ch <= 67){
        printf("%c is a Digit.\n", ch);
    } else{
        printf("%c is a Special Character.\n", ch);
    }
    
    /*  
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("%c is an Alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9'){
        printf("%c is a Digit.\n", ch);
    } else {
        printf("%c is a Special Character.\n", ch);
    }
*/
    return 0;
}