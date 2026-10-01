#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}