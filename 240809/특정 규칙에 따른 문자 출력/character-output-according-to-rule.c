#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=n-i;j>1;j--){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("@ ");
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("@ ");
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}