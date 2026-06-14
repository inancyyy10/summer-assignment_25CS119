//Write a program to Recursive factorial.
#include <stdio.h>

int main() {
    int n, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) printf("0");

    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    return 0;
}
