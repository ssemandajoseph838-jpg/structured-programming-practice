#include <stdio.h>

int main(void)
{
    int choice;
    float firstNumber,secondNumber,result;
    

    do
    {
        printf("\nSIMPLE CALCULATOR\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3)
        {
            printf("Enter first number: ");
            scanf("%lf", &firstNumber);

            printf("Enter second number: ");
            scanf("%lf", &secondNumber);
        }

        switch (choice)
        {
            case 1:
                result = firstNumber + secondNumber;
                printf("Result: %.2f\n", result);
                break;

            case 2:
                result = firstNumber - secondNumber;
                printf("Result: %.2f\n", result);
                break;

            case 3:
                result = firstNumber * secondNumber;
                printf("Result: %.2f\n", result);
                break;

            case 4:
                printf("Calculator closed.\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
