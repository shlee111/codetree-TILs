#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=2*n-2*i;j>1;j--){
            printf("* ");
        }
        printf("\n");   
    }
    for(int i=1;i<n;i++){
        for(int j=n;j>i+1;j--){
            printf("  ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("* ");
        }
        printf("\n");   
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}