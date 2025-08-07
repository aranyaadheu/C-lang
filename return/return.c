#include <stdio.h>

int square(int num){ // returning full nums so implementing int at the start,
    // replacing void to call a function. 

    int result = num * num;

    return result;
}

int main(){

    // return = returns a value back to where you call a function
    
    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}