#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2==0){
                    printf("%d ", (i*n)+j+1);
                }
                else{
                    printf("%d ", (i*n)+n-j);
                }
                }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}