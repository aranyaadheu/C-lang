// finding maximum number among three values. 
// using efficient nested if. 
#include <stdio.h>

int main(void) {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z) {
        printf("Maximum = %d", x);
    }

    if (y > x && y > z) {
        printf("Maximum = %d", y);
    }

    if ( z > x && z > y){
        printf("Maximum = %d", z);
    }

    return 0;
}