#include <stdio.h>

int main() {
    int n, arr[100], cnt=0;
    scanf("%d", &n);
    int idx = -1;

    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                idx=i+1;
                break;
            }
        }
    }

    printf("%d", idx);

    // 여기에 코드를 작성해주세요.
    return 0;
}