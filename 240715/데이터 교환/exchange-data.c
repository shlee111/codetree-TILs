#include <stdio.h>

int main() {
    int a = 5, b = 6, c = 7;
    int temp;

    temp = a;
    a = c;
    c = temp;
    printf("%d\n", a);

    temp = c;
    c = b;
    b = temp;
    printf("%d\n%d", b, c);
    

    
    // 여기에 코드를 작성해주세요.
    return 0;
}