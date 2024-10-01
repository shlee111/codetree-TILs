#include <stdio.h>

int main() {
    char n, word[6]={'L', 'E', 'B', 'R', 'O', 'S'};
    int idx = -1;

    scanf("%c", &n);

    for(int i=0;i<6;i++){
        if(word[i]==n)
            idx=i;
    }
    if(idx==-1)
        printf("None");
    else
        printf("%d", idx);
    // 여기에 코드를 작성해주세요.
    return 0;
}