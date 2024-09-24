#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for(int i=2;i<100;i++){
        arr[0]=1;
        arr[1]=n;
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<100;i++){
        printf("%d ", arr[i]);
        if(arr[i]>100)
            break;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}