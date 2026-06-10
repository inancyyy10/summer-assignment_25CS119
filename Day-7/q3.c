#include <stdio.h>

int main() {
    char op;
    double a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("%.2lf + %.2lf = %.2lf", a, b, a + b); break;
        case '-': printf("%.2lf - %.2lf = %.2lf", a, b, a - b); break;
        case '*': printf("%.2lf * %.2lf = %.2lf", a, b, a * b); break;
        case '/': printf("%.2lf / %.2lf = %.2lf", a, b, a / b); break;
        default: printf("Error! Operator is not correct");
    }
    return 0;
}
