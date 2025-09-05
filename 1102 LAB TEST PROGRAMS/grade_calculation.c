#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 80 && marks <= 100){
        printf("Congratulations! You've got an A(+)\n");
    }
    else if (marks >= 70 && marks <= 79){
        printf("Congrats! You've got an A.\n");
    } 
    else if (marks >= 60 && marks <=69){
        printf("Congrats! You've got A(-)\n");
    } 
    else if (marks >= 50 && marks <= 59){
        printf("You've got B\n");
    } 
    else if (marks >= 40 && marks <= 49){
        printf("You've got C\n");
    } 
    else{
        printf("You've Failed!\n");
    }

    return 0;
}