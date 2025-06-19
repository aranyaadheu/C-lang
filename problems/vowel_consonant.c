#include <stdio.h>

int main(void){
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    
    if((ch >='"A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        if(ch == 'A' || ch== 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("%c is a Vowel!!!!\n", ch);
        }
        else {
            printf("%c is a consonant!!\n", ch);
        }
    }

    return 0;
}