#include <stdio.h>

int main() {
    int n, a, sum=0, cnt=0;
    double avg;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &a);
        sum += a;
        cnt++;
    }
    avg = (double)sum / cnt;

    printf("%d %.1lf", sum, avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}