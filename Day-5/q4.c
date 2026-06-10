#include <stdio.h>
int main() {
    int n, max = -1;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            max = i;
            n /= i;
        }
    }
    printf("Largest Prime Factor: %d", max);
    return 0;
}
