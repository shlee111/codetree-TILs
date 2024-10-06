#include <stdio.h>
#include <limits.h>
int main() {
    int n, arr[100], cnt=0;
    int min = INT_MAX;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(min>arr[i])
            min=arr[i];  
    }
    for(int i=0;i<n;i++){
        if(arr[i]==min)
                cnt++;
    }
    printf("%d %d", min, cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}