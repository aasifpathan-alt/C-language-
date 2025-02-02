#include <stdio.h>

int main()
{

    int x, y, result = 0;
    char operation;

    printf("   CALCULATOR \n ");

    //  enter two numbers

    printf(" ENTER A NUMBER  : ");
    scanf("%d", &x);

    printf(" ENTER ANOTHER NUMBER  : ");
    scanf("%d", &y);

    // printf(" ENTER OPERATOR (+,-,*,/)  : ");
    // scanf("%c", &operation);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // now we are going to make operations between operands

    switch (operation)
    {
    case '+':
        result = x + y;
        printf("Output: %d\n", result);
        break;
    case '-':
        result = x - y;
        printf("Output: %d\n", result);
        break;
    case '*':
        result = x * y;
        printf("Output: %d\n", result);
        break;
    case '/':
        if (y != 0)
        {
            result = x / y;
            printf("Output: %d\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operation.\n");
    }

    return 0;
}