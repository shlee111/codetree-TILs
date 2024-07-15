#include <stdio.h>

int main() {
    int a, b, temp;
    
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("%d %d", a, b);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}