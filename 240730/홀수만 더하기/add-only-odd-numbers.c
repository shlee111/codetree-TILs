#include <stdio.h>

int main() {
    int n, a, sum=0;
    scanf("%d\n", &n);
    for(int i=1; i<=n; i++){
        scanf("%d\n", &a);
        if((a%2==1)&&(a%3==0))
            sum += a;
    }
    printf("%d", sum);
    // 여기에 코드를 작성해주세요.
    return 0;
}