//Write a program to Print prime numbers in a range.
#include <stdio.h>
int main() {
    int start, end, i, j, isPrime;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    for (i = start; i <= end; i++) {
        if (i < 2) continue;
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) { isPrime = 0; break; }
        }
        if (isPrime == 1) printf("%d ", i);
    }
    return 0;
}
