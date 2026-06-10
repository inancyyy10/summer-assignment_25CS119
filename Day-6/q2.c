#include <stdio.h>

int main() {
    int n, decimal = 0, base = 1, rem;
    printf("Enter binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        n /= 10;
        base *= 2;
    }

    printf("Decimal: %d", decimal);
    return 0;
}
