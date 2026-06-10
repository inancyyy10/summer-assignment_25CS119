#include <stdio.h>

int main() {
    double x, result = 1.0;
    int n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &x, &n);

    int abs_n = n < 0 ? -n : n;

    for (int i = 0; i < abs_n; i++) {
        result *= x;
    }

    if (n < 0) result = 1.0 / result;

    printf("Result: %.2f", result);
    return 0;
}
