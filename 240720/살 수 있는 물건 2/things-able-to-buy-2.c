#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n >= 3000){
        printf("book");
    }
    else if(n >= 1000){
        printf("mask");
    }
    else if(n >= 500){
        printf("pen");
    }
    else{
        printf("no");
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}