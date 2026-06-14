//Write a program to Reverse a number.
#include <stdio.h>
int main() {
    int n, reverse = 0, l;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) {
        l = n % 10;
        reverse = reverse * 10 + l;
        n /= 10;
    }
    printf("Reversed Number: %d", reverse);
    return 0;
}
