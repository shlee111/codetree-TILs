#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d.", a/b);

    a%=b;
    for(int i=0; i<20; i++){
        a*=10;
        printf("%d", a/b);

        a %= b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}