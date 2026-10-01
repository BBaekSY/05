#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int answer = 59;
    int guess;
    int count = 0;

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        count++;

        if (guess > answer) {
            printf("Too high!\n");
        }
        else if (guess < answer) {
            printf("Too low!\n");
        }

    } while (guess != answer);

    printf("Correct! Attempts: %d\n", count);

    return 0;
}