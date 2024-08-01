#include <stdio.h>

int main() {
    int n;
    1<=n && n<=100;
    
    while(1){
        scanf("%d\n", &n);
        if(n==1)
            printf("John\n");
        else if(n==2)
            printf("Tom\n");
        else if(n==3)
            printf("Paul\n");
        else if(n==4)
            printf("Sam\n");
        else{
            printf("Vacancy");
            break;
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}