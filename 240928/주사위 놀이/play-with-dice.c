#include <stdio.h>

int main() {
    int arr[10];
    int cnt_arr[7]={0,};

    for(int i=0;i<10;i++){
        scanf("%d ", &arr[i]);
        cnt_arr[arr[i]]++;
    }
    for(int i=1;i<7;i++){
        printf("%d - %d \n", i, cnt_arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}