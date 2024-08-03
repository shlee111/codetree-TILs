#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d", &N);

    while(1){
        if(N==1)
            break;
        if(N%2==0)
            N=N/2;
        else
            N=3*N+1;
        
        cnt++;
    }
    printf("%d",cnt);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}