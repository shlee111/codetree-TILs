#include <stdio.h>

int main() {
    int a, b, sum_val=0;
    scanf("%d %d",&a, &b);

    for(int i=a;i<=b;i++){
        sum_val+=i;
    }
    printf("%d", sum_val);
    // 여기에 코드를 작성해주세요.
    return 0;
}