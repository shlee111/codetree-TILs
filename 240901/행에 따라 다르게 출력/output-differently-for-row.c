#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int k = 0;
    int num = 1;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i % 2 == 0) {
                num = 1;
            } else {
                num = 2;
            }
            k = k + num;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}