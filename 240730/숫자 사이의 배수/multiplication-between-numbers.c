#include <stdio.h>

int main() {
    int a, b, sum=0, cnt=0;
    double avg;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if((i%5==0)||(i%7==0)){
            sum += i;
            cnt++;
        }
    }
    avg = (double)sum/cnt;

    printf("%d %.1lf", sum, avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}