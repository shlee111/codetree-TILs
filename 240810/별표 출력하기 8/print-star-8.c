#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(i%2==1){
            printf("*");
        }
        else{
            for(int j=0;j<i;j++){
                printf("* ");
            }            
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}