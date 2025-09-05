// Find if an input is Alphabet or number or special character. 
// If it is an alphabet check whether it is a consonant or a vowel.
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("This is an Alphabet\n");
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                printf("This is a Vowel\n");
        }
    } else if (ch >= '0' && ch <= '9'){
        printf("This is a Number\n");
    } else{
        printf("A Special Character\n");
    }

    return 0;
}