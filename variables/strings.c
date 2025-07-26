#include <stdio.h>

int main(){
    /*
    variable = A reusable container for a value.
               behaves as if it were the value it contains.
    int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char [] = array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
    
    */
    // string is a series of characters

    char name[] = "aranyaadheu";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);
    return 0;
}