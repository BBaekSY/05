#include <stdio.h>

int main(void)
{
    int c;
    int num = 0;

    printf("Enter a string: ");

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= '0' && c <= '9') {
            num++;
        }
    }

    printf("Number of digits: %d\n", num);

    return 0;
}