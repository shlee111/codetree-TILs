#include <stdio.h>

int main() {
    int n, cnt=0;
    while(1){
        scanf("%d\n",&n);
            if(n%2==1)
                continue;
            
            printf("%d\n", n/2);
            cnt++;
            
            if(cnt>=3)    
                break;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}