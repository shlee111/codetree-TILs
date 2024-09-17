#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                break;
            }
        }
        if(j > i/2){
            printf("%d ", i);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}