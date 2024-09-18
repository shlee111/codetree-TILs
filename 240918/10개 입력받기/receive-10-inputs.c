#include <stdio.h>

int main() {
    int arr[10], sum=0, cnt=0;
    
    for(int i=0;i<10;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<10;i++){
        sum += arr[i];
        if(arr[i]==0)
            break;
        cnt++;
    }
    double avg = (double)sum/cnt;

    printf("%d %.1lf", sum, avg);

    // 여기에 코드를 작성해주세요.
    return 0;
}