#include <stdio.h>

int main() {
    int n, cnt=1, arr[100], cnt1=0;
    scanf("%d", &n);

    for(int i=0;i<100;i++){
        arr[i]=n*cnt;
        cnt++;    
    }
    for(int i=0;i<100;i++){
        printf("%d ", arr[i]);
        if(arr[i]%5 == 0)
          cnt1++;
        if(cnt1>=2)
            break;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}