#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}