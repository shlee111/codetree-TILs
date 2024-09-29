#include <stdio.h>

int main() {
    int cnt_arr[5]={0, };
    int t, type_num = 0;
    char s;

    for(int i=0;i<3;i++){
        scanf("%c %d\n", &s, &t);

        if(t>=37 && s=='Y')
            type_num = 1;
        else if(t>=37)
            type_num = 2;
        else if(t<37 && s=='Y')
            type_num = 3;
        else
            type_num = 4;
        cnt_arr[type_num]++;
    }
    for(int i=1;i<=4;i++){
        printf("%d ", cnt_arr[i]);
    }
    if(cnt_arr[1]>=2)
        printf("E");

    // 여기에 코드를 작성해주세요.
    return 0;
}