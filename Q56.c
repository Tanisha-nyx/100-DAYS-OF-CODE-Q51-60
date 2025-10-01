#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        int is_prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d\n", num);
    }

    return 0;
}