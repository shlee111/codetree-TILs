#include <stdio.h>

int main() {
    int n, arr[10];
    int cnt_arr[9] = {0, };

    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
        cnt_arr[arr[i]]++;
    }

    for(int i=1;i<10;i++){    
        
        printf("%d\n", cnt_arr[i]);
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}