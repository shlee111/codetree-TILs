#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    for(int i=1; i<=10; i++){
        scanf("%d", &n);
        if(n%2==1){
            cnt++;
        }       
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}