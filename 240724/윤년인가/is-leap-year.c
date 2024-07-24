#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    if((y%4 == 0 && y%100 != 0) || (y%400 == 0)){
        printf("true");
    }
    else{
        printf("false");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}