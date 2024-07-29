#include <stdio.h>

int main() {
    int b, a;
    scanf("%d %d", &b, &a);

    int i = b;
    while(i>=a){
        printf("%d ", i);
        i -= 2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}