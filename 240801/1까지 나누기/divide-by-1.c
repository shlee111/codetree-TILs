#include <stdio.h>

int main() {
    int n, cnt=0, a=1;
    scanf("%d", &n);

    for(int i=1;;++i){
        int a = n/i;
        
        cnt++;
        if(a<=1){
            break;
        }
    }
    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}