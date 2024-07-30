#include <stdio.h>

int main() {
    int N;
    scanf("%d\n", &N);
    for(int i=1;i<=N;i++){
        int a;
        scanf("%d\n", &a);
        
        if((a%2==1)&&(a%3==0)){
            printf("%d\n", a);
        }
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}