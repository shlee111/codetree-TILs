#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0)
            continue;
        if(i%10==5)
            continue;
        if(i%3==0 && i%9!=0)
            continue;
        printf("%d ", i);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}