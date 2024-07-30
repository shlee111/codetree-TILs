#include <stdio.h>

int main() {
    int n, cnt=0;
    for(int i=1; i<=5; i++){
        scanf("%d\n", &n);
        if(n%2==0)
            cnt++;
    }
    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}