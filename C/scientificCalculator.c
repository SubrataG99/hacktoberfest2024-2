#include <stdio.h>
#include <math.h>

// Function to perform basic arithmetic operations
void basicCalculator() {
    int choice;
    double num1, num2, result;

    printf("Basic Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}

// Function to perform trigonometric operations
void trigonometricCalculator() {
    int choice;
    double num, result;

    printf("Trigonometric Calculator\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the angle in degrees: ");
    scanf("%lf", &num);

    switch (choice) {
        case 1:
            result = sin(num * M_PI / 180);
            printf("sin(%.2lf) = %.2lf\n", num, result);
            break;
        case 2:
            result = cos(num * M_PI / 180);
            printf("cos(%.2lf) = %.2lf\n", num, result);
            break;
        case 3:
            result = tan(num * M_PI / 180);
            printf("tan(%.2lf) = %.2lf\n", num, result);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

// Function to perform exponential operations
void exponentialCalculator() {
    int choice;
    double num, result;

    printf("Exponential Calculator\n");
    printf("1. Exponential (e^x)\n");
    printf("2. Natural Logarithm (ln x)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number: ");
    scanf("%lf", &num);

    switch (choice) {
        case 1:
            result = exp(num);
            printf("e^(%.2lf) = %.2lf\n", num, result);
            break;
        case 2:
            if (num > 0) {
                result = log(num);
                printf("ln(%.2lf) = %.2lf\n", num, result);
            } else {
                printf("Error! Logarithm is not defined for non-positive numbers.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main() {
    int choice;

    printf("Scientific Calculator\n");
    printf("1. Basic Calculator\n");
    printf("2. Trigonometric Calculator\n");
    printf("3. Exponential Calculator\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            basicCalculator();
            break;
        case 2:
            trigonometricCalculator();
            break;
        case 3:
            exponentialCalculator();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
