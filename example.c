#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int first, second;
    char op;

    printf("Enter an expression (e.g. 2 + 5): ");
    scanf("%d %c %d", &first, &op, &second);

    switch (op) {
    case '+':
        printf("%d+%d=%d\n", first, second, first + second);
        break;

    case '-':
        printf("%d-%d=%d\n", first, second, first - second);
        break;

    case '*':
        printf("%d*%d=%d\n", first, second, first * second);
        break;

    case '/':
        if (second == 0) {
            printf("Cannot divide by zero.\n");
        }
        else {
            printf("%d/%d=%d\n", first, second, first / second);
        }
        break;

    default:
        printf("Invalid operator.\n");
        break;
    }

    return 0;
}