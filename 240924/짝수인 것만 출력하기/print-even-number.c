#include <stdio.h>

int main() {
    int n, arr1[100], cnt=0, arr2[100];
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d ", &arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]%2==0){
            arr2[cnt++]=arr1[i];
        }
    }
    for(int i=0;i<cnt;i++){
        printf("%d ", arr2[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}