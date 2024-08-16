#include <stdio.h>

int main() {
    int n, cnt=1;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", cnt*2);
            cnt++;
            if(cnt>4){
                cnt = 1;
            }
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}