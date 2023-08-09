#include <stdio.h>

void swap(int a, int b);

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped: a = %d, b = %d\n", a, b);
}

