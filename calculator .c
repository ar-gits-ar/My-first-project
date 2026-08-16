#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Result = %d", num1 + num2);
    else if (choice == 2)
        printf("Result = %d", num1 - num2);
    else if (choice == 3)
        printf("Result = %d", num1 * num2);
    else if (choice == 4)
        printf("Result = %d", num1 / num2);
    else
        printf("Invalid choice");

    return 0;
}
