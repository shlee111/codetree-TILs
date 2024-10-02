#include <stdio.h>

int main() {
    int n, q, i, type, arr_n[100];
    int idx = -1;
    
    scanf("%d %d", &n, &q);

    for(i=0;i<n;i++){
        scanf("%d ", &arr_n[i]);
    }
    for(i=0;i<q;i++){
        scanf("%d ", &type);    
        if(type==1){
            int a;
            scanf("%d", &a);
            printf("%d\n",arr_n[a-1]);
        }
        else if(type==2){
            int b;
            scanf("%d", &b);
            for(int j=0;j<n;j++){
                if(arr_n[j]==b){
                    idx = j;
                    break;
                }
            }
            printf("%d\n", idx+1);
        }
        else{
            int s, e;
            scanf("%d %d", &s, &e);
            for(int j=s-1;j<e;j++){
                printf("%d ", arr_n[j]);
            }
            printf("\n");
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}