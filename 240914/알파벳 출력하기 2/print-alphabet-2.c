#include <stdio.h>

int main() {
    int n;
    char x='A';
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=n-i;j>0;j--){
            printf("%c ", x);
            x++;
            if(x >'Z')
                x='A';     
        }
    printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}