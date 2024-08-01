#include <stdio.h>

int main() {
    int n, cnt, divisor;
    scanf("%d", &n);
    cnt = 0;
    divisor = 1;

    if (n >= 2 && n <= 5000) {
        while (n > 1) {
            n /= divisor;
            divisor++;
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}