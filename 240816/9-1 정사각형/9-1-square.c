#include <stdio.h>

int main() {
    int n, cnt=9;
    scanf("%d", &n);

    for(int i=n;i>0;i--){
        for(int j=n;j>=1;j--){
            printf("%d", cnt);
            cnt--;
            if(cnt <= 0){
                cnt = 9;
            }
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}