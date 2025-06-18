// find the maximum number among three numbers. 
// using nested if. 
#include <stdio.h>

int main(void){
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    if (x > y){
        if (x > z){
            printf("Maximum = %d", x);
        }
    }

    if (y > x){
        if (y > z){
            printf("Maximum = %d", y);
        }
    }

    if (z > x){
        if (z > y){
            printf("Maximum = %d", z);
        }
    }

    return 0;
}