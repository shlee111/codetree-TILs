#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool satisfied = true;
    for(int i=2;i<n;i++){
        if(n%i==0)
            satisfied = false;
    }
    if(satisfied == true)
        printf("P");
    else
        printf("C");
    // 여기에 코드를 작성해주세요.
    return 0;
}