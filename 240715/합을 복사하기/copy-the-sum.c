#include <stdio.h>

int main() {
    int a = 1, b = 2, c= 3, d = a + b + c;

    a = b = c = d; 

    printf("%d %d %d",a, b, c);
    // 여기에 코드를 작성해주세요.
    return 0;
}