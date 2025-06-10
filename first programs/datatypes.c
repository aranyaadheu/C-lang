#include <stdio.h>

int main(void){
    int x = 45;
    float y = 23.65; // %.2f two print the first two decimals (%.1f, %.2f, %.3f)
    char z = 'A';
    printf("Our values are %d, %.2f and %c", x, y, z);
    return 0;
}