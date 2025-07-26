#include <stdio.h>
#include <stdbool.h>

int main(){
    // bool means binary, two possible values. 
    // true or false, representing 0, 1s. 
    // true = 1, false = 0
    // internally within a program

    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;
    
    /*if(isOnline){
        printf("You are ONLINE");
    } else{
        printf("You are OFFLINE");
    }*/

    /*if(isStudent){
        printf("You are a student");
    } else{
        printf("You are NOT a student");
    }*/

    if(forSale){
        printf("This item is for sale");
    } else{
        printf("This item is NOT for sale.");
    }

    return 0;
}