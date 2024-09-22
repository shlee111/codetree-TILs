#include <stdio.h>

int main() {
    int arr[10], cnt=0, sum1=0, sum2=0;
    
    for(int i=1;i<=10 ;i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=1;i<=10;i++){
        if(i%2==0){
            sum1+=arr[i];
        }
        if(i%3==0){
            sum2+=arr[i];
            cnt++;
        }
    }
    double avg=(double)sum2 / cnt;
    printf("%d %.1lf", sum1, avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}