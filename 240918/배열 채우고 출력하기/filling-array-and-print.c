#include <stdio.h>

int main() {
    char arr[10];

    for(int i=0;i<10;i++){
        scanf("%c ", &arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%c", arr[9-i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}