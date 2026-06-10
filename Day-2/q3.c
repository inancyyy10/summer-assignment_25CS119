#include <stdio.h>
int main() {
    int n, product = 1, l;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) product = 0;
    while(n > 0) {
        l = n % 10;
        product *= l;
        n /= 10;
    }
    printf("Product is %d", product);
    return 0;
}
