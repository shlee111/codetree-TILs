#include <stdio.h>

int main() {
    int sex, year;
    scanf("%d\n%d",&sex, &year);

    if(sex == 0){
        if(year >= 19){
            printf("MAN");
        }
        else{
            printf("BOY");
        }
    }
    if(sex == 1){
        if(year >= 19){
            printf("WOMAN");
        }
        else{
            printf("GIRL");
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}