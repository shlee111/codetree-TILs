#include <stdio.h>

int main() {
    int n, sum=0, cnt=0;
    double avg;
    for(int i=1; i<=10; i++){
        scanf("%d\n", &n);
        
        if(0<=n && n<=200){
            sum += n;
            cnt++;
        }
    }
    avg = (double)sum/cnt;
    printf("%d %.1lf", sum, avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}