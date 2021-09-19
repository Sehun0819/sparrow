// 4digits-text.c:293
// sparrow: false alarm / infer: no alarm
#include<stdio.h>
#include<stdlib.h>

int main() {
    int dup;
    int guessed[8] = {0,0,0,0,0,0,0,0};
    int input;
    scanf("%d", &input);

    for (int num_guess = 0; num_guess < 8; num_guess++) {
        for(int i = 0; i < num_guess; i++) {
            if (input) {
                --num_guess;
                break;
            }
        }

        guessed[num_guess] = input;
    }

    return 0;
}