#include <stdio.h>

int main() {
    int n;
    while(1){
        scanf("%d\n", &n);
        if(n<25)
            printf("Higher\n");
        else if(n>25)
            printf("Lower\n");
        else
            break;
    }
    printf("Good");
    // 여기에 코드를 작성해주세요.
    return 0;
}