#include <stdio.h>

int main() {
    int n;
    char x='A';
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c", x);
            x++;
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}