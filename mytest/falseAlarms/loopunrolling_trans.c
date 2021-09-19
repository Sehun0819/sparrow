// 4digits-text.c:293
#include<stdio.h>
#include<stdlib.h>

int main() {
    int guessed[8] = {0,0,0,0,0,0,0,0};
    int input;
    scanf("%d", &input);

    int num_guess = 0;
    guessed[num_guess] = input;

    for (num_guess = 1; num_guess < 8; num_guess++) {
        for(int i = 0; i < num_guess; i++) {
            if (!input) {
                --num_guess;
                break;
            }
        }

        guessed[num_guess] = input;
    }

    for (int j = 0; j < 8; j++) {
        printf("%d ", guessed[j]);
    }

    return 0;
}