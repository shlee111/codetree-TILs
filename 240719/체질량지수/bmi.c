#include <stdio.h>

int main() {
    int h, w;
    
    scanf("%d %d", &h, &w);
    
    int b = (10000*w)/(h*h);
    printf("%d", b);

    if(b >= 25)
        printf("\nObesity");

    // 여기에 코드를 작성해주세요.
    return 0;
}