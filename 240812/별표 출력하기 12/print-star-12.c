#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j%2 == 0){
                if(i==0)
                    printf("* ");
                else
                    printf("  ");
            }
            else{
                if(i<=j)
                    printf("* ");    
                else
                    printf("  ");
            }
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}