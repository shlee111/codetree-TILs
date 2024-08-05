#include <stdio.h>

int main() {
    int n, prod=1, x=0;
    
    scanf("%d", &n);

    while(1){
        prod *= 2;
        x++;
        if(prod == n)
            break;
    }
    printf("%d", x);
    // 여기에 코드를 작성해주세요.
    return 0;
}