#include <stdio.h>

int main() {
    int b, a;
    scanf("%d %d", &b, &a);

    for(int i=b; i>=a; i-=2){
        printf("%d ", i);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}