#include <stdio.h>

int main() {
    int arr[10], sum = 0, cnt=0;
    

    for(int i=0;i<10;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]>=250){
            break;
        }
            sum += arr[i];
            cnt++;
    }
    double avg = (double)sum / cnt;
    
    printf("%d %.1lf", sum, avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}