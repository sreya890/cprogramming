#include <stdio.h>

int main() {
    int n, i, j, is_prime;
    printf("Enter the range: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
        {
        is_prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d is a prime number. It is ", i);
            if (i % 2 == 0) {
                printf("even.\n");
            } else {
                printf("odd.\n");
            }
        }
    }
    return 0;
}


