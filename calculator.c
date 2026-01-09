#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, result;
    char operator;
    int continueCalculating = 1;

    printf("Simple Calculator in C\n");

    do
    {
        printf("\nEnter first number: ");
        scanf("%f", &num1);

        printf("Enter an operator (+, -, *, /, ^) or 'q' to stop: ");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q')
        {
            continueCalculating = 0;
            printf("Exiting the calculator. Goodbye!\n");
            break; 
        }

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (operator)
        {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } 
                else 
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case '^':
                result = pow(num1, num2);
                printf("%.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;

            default:
                printf("Error: Invalid operator.\n");
        }
        
    } while (continueCalculating);

    return 0;
}