#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, digits;
    double sum;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        sum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;

        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if ((int)sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
