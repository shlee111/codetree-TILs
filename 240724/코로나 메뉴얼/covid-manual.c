#include <stdio.h>

int main() {
    int Atemp, Btemp, Ctemp;
    char Acold, Bcold, Ccold;
    scanf("%c %d\n%c %d\n%c %d", &Acold, &Atemp, &Bcold, &Btemp, &Ccold, &Ctemp);

    if(Acold == 'Y' && Atemp >= 37){
        if((Bcold == 'Y' && Btemp >= 37) || (Ccold == 'Y' && Ctemp >= 37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    else{
        if((Bcold == 'Y' && Btemp >= 37) && (Ccold == 'Y' && Ctemp >= 37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}