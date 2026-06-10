#include <stdio.h>
int main() {
    int n, reversed = 0, rem, org;
    printf("Enter an integer: ");
    scanf("%d", &n);
    org = n;
    while (n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    if (org == reversed)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);
    return 0;
}
