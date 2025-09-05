// Find if an input is Alphabet or number or special character.
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a Character: ");
    scanf(" %c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("Alphabet\n");
    } else if(ch >= '0' && ch <= '9'){
        printf("Number\n");
    } else{
        printf("Special Character\n");
    }

    return 0;
}