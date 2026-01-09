#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    float currentValue, nextNumber;
    char operator;
    bool isNewCalculation = false;

    printf("--- Continuous Calculator ---\n");

    do
    {
        if (!isNewCalculation)
        {
            printf("\nEnter starting number: ");
            scanf("%f", &currentValue);
            isNewCalculation = true;
        }

        printf("\n[Current Value: %.2f]\n", currentValue);
        printf("Operator (+, -, *, /, ^) | 'c' to Clear | 'q' to Quit: ");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q')
        {
            printf("Exiting. Goodbye!\n");
            break;
        }

        if (operator == 'c' || operator == 'C')
        {
            isNewCalculation = false;
            printf("Memory Cleared. Starting new calculation.\n");
            continue;
        }

        printf("Enter next number: ");
        scanf("%f", &nextNumber);
        system("cls"); 

        switch (operator)
        {
        case '+':
            currentValue += nextNumber;
            break;

        case '-':
            currentValue -= nextNumber;
            break;

        case '*':
            currentValue *= nextNumber;
            break;

        case '/':
            if (nextNumber != 0)
            {
                currentValue /= nextNumber;
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            /* no fallthrough */
            break;

        case '^':
            currentValue = pow(currentValue, nextNumber);
            break;

        default:
            printf("Invalid operator.\n");
        }

    } while (true);

    return 0;
}