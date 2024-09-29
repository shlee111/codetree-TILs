#include <stdio.h>

int main() {
    int arr[100];
    int cnt_arr[11] = {0, };

    for(int i=0;i<100;i++){
        scanf("%d ", &arr[i]);
       
        cnt_arr[arr[i]/10]++;
        if(arr[i]==0)
            break;
        if(arr[i]<10)
            continue;
    }
    for(int i=10;i>=1;i--){
        printf("%d - %d\n", i*10, cnt_arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}