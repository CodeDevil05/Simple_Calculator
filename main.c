#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1; 
    }
    printf("Result: %.2f\n", result);
     return 0; /
}
