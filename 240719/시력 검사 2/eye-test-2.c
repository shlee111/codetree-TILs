#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    if(a >= 1.0){
        printf("High");
    }
    else if(a >= 0.5){
        printf("Middle");
    }
    else{
        printf("Low");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}