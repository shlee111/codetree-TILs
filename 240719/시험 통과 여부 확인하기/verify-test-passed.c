#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>=80){
        printf("pass");
    }
    else{
        printf("%d more score", 80 - n);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}