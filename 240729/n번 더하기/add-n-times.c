#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    for(int i = a+n; i<=a+n*n; i += n){
        printf("%d\n", i);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}