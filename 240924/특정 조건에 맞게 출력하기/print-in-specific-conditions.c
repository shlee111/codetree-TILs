#include <stdio.h>

int main() {
    int arr[100];

    for(int i=0;i<100;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<100;i++){
        if(arr[i]==0)
            break;
        if(arr[i]%2==1)
            printf("%d ", arr[i]+3);
        else
            printf("%d ", arr[i]/2);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}