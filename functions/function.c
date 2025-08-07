#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){ // pass the parameters
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main(){

    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent to a function so that it can use them.

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // user input in string.h func
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age); // pass the arguments. 

    return 0;
}