#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n >= 90){
        printf("A");
    }
    else if(n >= 80){
        printf("B");
    }
    else if(n >= 70){
        printf("C");
    }
    else if(n >= 60){
        printf("D");
    }
    else{
        printf("F");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}