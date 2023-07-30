#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume the newline character.

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform the calculation based on the operator
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
                return 1; // Return non-zero to indicate an error.
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1; // Return non-zero to indicate an error.
    }

    // Output the result
    printf("Result: %.2f\n", result);

    return 0; // Return zero to indicate successful execution.
}
