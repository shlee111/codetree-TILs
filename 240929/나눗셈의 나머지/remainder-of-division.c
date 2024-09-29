#include <stdio.h>

int main() {
    int a, b, i,arr[10], sum=0;
    int cnt_arr[10]={0,};

    scanf("%d %d", &a, &b);
    
    for(i=a;i>1;i/=b){
        arr[i] = i%b;
        cnt_arr[arr[i]]++;
    }
    for(i=0;i<10;i++){
        sum += cnt_arr[i]*cnt_arr[i];
    }
    printf("%d", sum);
    

    // 여기에 코드를 작성해주세요.
    return 0;
}