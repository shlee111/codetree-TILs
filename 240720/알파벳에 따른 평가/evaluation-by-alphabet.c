#include <stdio.h>

int main() {
    char a;
    scanf("%s", &a);
    
    if(a == 'S'){
        printf("Superior");
    }
    else if(a == 'A'){
        printf("Excellent");
    }
    else if(a == 'B'){
        printf("Good");
    }
    else if(a == 'C'){
        printf("Usually");
    }
    else if(a == 'D'){
        printf("Effort");
    }
    else{
        printf("Failure");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}