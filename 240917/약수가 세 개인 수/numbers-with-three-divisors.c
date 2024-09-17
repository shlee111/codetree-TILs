#include <stdio.h>

int main() {
    int start, end, cnt2=0;
    scanf("%d %d", &start, &end);

    for(int i=start;i<=end;i++){
        int cnt1=0;

        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt1++;
            }
        }
        if(cnt1==3)
            cnt2++;
    }
    printf("%d", cnt2);
    // 여기에 코드를 작성해주세요.
    return 0;
}