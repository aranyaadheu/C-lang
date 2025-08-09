#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main(){

    // function prototype = Provide the compiler w/ information about a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      Improves redability, organization, and helps prevent errors. 

    hello("Spongebob", 22);

    if (ageCheck(26))
    {
        printf("You are old enough to work here.\n");
    }
    else
    {
        printf("You must be 16+ to work here.\n");
    }
    

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age)
{
    /*if (age >= 16){
        return true;
    }
    else{
        return false;
    }*/

    return age >= 16;

}