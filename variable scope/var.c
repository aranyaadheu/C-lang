#include <stdio.h>

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main(){
    // variable scope = Refers to where a variable is recognize and accessible.
    //                  Variables can share the same name if
    //                  they're in different scopes{}

    int x = 5;
    int y = 6;
    // int result = subtract(3, 4);
    int result = add(x, y);

    printf("%d", result);

    return 0;
}