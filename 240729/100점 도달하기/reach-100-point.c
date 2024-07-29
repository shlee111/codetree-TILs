#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=n;i<=100;i++){
        if(90<=i)
            printf("A ");
        else if(80<=i)
            printf("B ");
        else if(70<=i)
            printf("C ");
        else if(60<=i)
            printf("D ");
        else
            printf("F ");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}