// find the maximum number among three numbers. 
// using nested if. 
#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    if (x > y){
        if (x > z){
            printf("Maximum = %d\n", x);
        }
    }

    if (y > x){
        if(y > z){
            printf("Maximum = %d\n", y);
        }
    }

    if ( z > y){
        if(z > x){
            printf("Maximum = %d\n", z);
        }
    }

    return 0;
}