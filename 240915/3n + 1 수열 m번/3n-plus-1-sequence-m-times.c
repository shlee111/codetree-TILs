#include <stdio.h>

int main() {
    int m;
    scanf("%d\n", &m);

    for(int i=0;i<m;i++){
        int n, cnt=0;
        scanf("%d", &n);

        while(n != 1){
            if(n%2==0)
                n /= 2;
            else
                n=n*3+1;

            cnt++;
        }
        printf("%d\n", cnt);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}