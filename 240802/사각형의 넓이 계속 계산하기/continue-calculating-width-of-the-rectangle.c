#include <stdio.h>

int main() {
    int width,height;
    char a;
    while(1){
        scanf("%d %d %c\n", &width, &height, &a);
        
        int x = width * height;
        if(a !='C'){
            printf("%d\n", x);
        }
        else{
            printf("%d\n", x);
            break;
        }
            
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}