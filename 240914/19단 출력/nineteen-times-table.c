#include <stdio.h>

int main() {
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++){
            if(j%2==0 || j==19)
                printf("%d * %d = %d\n", i, j, i*j);
            else
                printf("%d * %d = %d / ", i, j, i*j);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}