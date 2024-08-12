#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=2*n;i++){
        if(i%2==1){
            for(int j=n-(i/2);j>0;j--){
                printf("* ");
            }
        }
        else{
            for(int j=0;j<i/2;j++){
                printf("* ");
            }
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}