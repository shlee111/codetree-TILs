#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=1; ;i++){
        n/=i;
        cnt++;
        if(n<=1){
            printf("%d\n", cnt);
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}