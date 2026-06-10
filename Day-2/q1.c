#include <stdio.h>
int main() {
    int n, sum = 0, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {
        last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    printf("Sum is %d", sum);
    return 0;
}
