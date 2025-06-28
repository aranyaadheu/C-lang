#include <stdio.h>

int main(){
    int marks [] = {70, 75, 65, 100, 45, 78}, i, length;
    length = sizeof(marks)/4;
    printf("Number of element := %d\n\n", length);
    marks[3] = 98;
    for (i = 0; i < length; i++){
        printf("%d\n", marks[i]);
    }
    return 0;
}