#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if((a > b && b > c) || (c > b && b > a)){
        printf("%d", b);
    }
    else if((b > a && a > c) || (c > a && a > b)){
        printf("%d", a);
    }
    else if((a > c && c > b) || (b > c && c > a)){
        printf("%d", c);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}