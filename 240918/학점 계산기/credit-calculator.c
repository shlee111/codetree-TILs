#include <stdio.h>

int main() {
    int n;
    double arr[5];
    double sum=0;
    scanf("%d\n", &n);

    for(int i=0;i<n;i++){
        scanf("%lf ", &arr[i]);
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    double avg = sum/n;

    printf("%.1lf\n", avg);

    if(avg >= 4.0)
        printf("Perfect");
    else if(avg >= 3.0)
        printf("Good");
    else
        printf("Poor");
    // 여기에 코드를 작성해주세요.
    return 0;
}