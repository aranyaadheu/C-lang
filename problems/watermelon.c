#include <stdio.h>

int main(void){
    int watermelon;
    scanf("%d", &watermelon);
    if(watermelon% 2 == 0 && watermelon >= 4){
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}