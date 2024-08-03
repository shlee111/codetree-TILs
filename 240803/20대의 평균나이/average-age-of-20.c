#include <stdio.h>

int main() {
    int y, cnt=0, sum=0;
    double avg;
    
    
    while(1){   
        scanf("%d\n", &y);
        if(y>=20 || y<30){
            avg =(double)sum / cnt;
            sum += y;
            cnt++;
        }
        
        if(y<20 || y>=30){
             printf("%.2lf", avg);
            break;
        }
                 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}