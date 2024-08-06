#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    while(1){
        if(n%2==0){
            n = 3*n + 1;
            cnt++;
        }
        else{
            n = 2*n + 2;
            cnt++;
        }
        if(n>=1000)
            break;
    }
    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}