#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1,n2,A[100], B[100], i;
    scanf("%d %d", &n1, &n2);
    for(i=0;i<n1;i++){
        scanf("%d ", &A[i]);
    }
    for(i=0;i<n2;i++){
        scanf("%d ", &B[i]);
    }
    for(i=0;i<n1;i++){
        // arr1의 i번 index부터의 수열이 arr2와 완전히 일치하는지 확인합니다.
		// 즉, arr1[i] == arr2[0], arr1[i+1] == arr2[1]...이 성립하는지 확인합니다.
		// success : arr1의 i번 index부터의 수열이 arr2와 완전히 일치할때만 true, 그 외 false
        bool success = true;
        for(int j=0;j<n2;j++){
            // arr1의 index가 범위 밖으로 벗어날때
            if(i+j >= n1){
                success = false;
                break;
            }
            // arr1과 arr2가 일치하지 않을때
            if(A[i+j] != B[j]){
                success = false;
                break;
            }
        }
         if(success){
        printf("Yes");
        return 0;
        }
    }
   
    printf("No");
    
    // 여기에 코드를 작성해주세요.
    return 0;
}