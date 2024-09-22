#include <stdio.h>

int main() {
    int arr[10], even_sum=0, odd_sum=0;

    for(int i=0;i<10;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<10;i++){
        if(i%2==0)
            even_sum+=arr[i];
        else
            odd_sum+=arr[i];
    }
    if(even_sum>=odd_sum)
        printf("%d", even_sum-odd_sum);
    else
        printf("%d", odd_sum-even_sum);
    // 여기에 코드를 작성해주세요.
    return 0;
}