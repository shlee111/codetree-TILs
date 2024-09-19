#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int arr[10],sum=0;
        for(int j=0;j<4;j++){
            scanf("%d ", &arr[j]);
        }
        for(int j=0;j<4;j++){
            sum += arr[j];
        }
        
        double avg =(double)sum/4;

        if(avg>=60){
            printf("pass\n");
            cnt++;
        }
        else{
            printf("fail\n");
        }
    }
    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}