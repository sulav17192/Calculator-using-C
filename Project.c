#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char choice;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
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
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error! Division by zero is not allowed.\n");
                    continue; 
                }
                break;
            default:
                printf("Error! Invalid operator.\n");
                continue; 
        }

        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

        printf("Do you want to change numbers or operator? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you!\n");
    return 0;
}
