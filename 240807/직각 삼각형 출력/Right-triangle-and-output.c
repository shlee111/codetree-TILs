#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1;i<=2*n;i+=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}