#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100


void initialize_number_generator(void);
int new_secert_number(void);
void read_guesses(int secret_number);


int main(void)
{
    char command;
    int secret_number;
    printf("Guess the secret number between 1 and %d.\n\n",MAX_NUMBER);
    initialize_number_generator();
    do
    {
        secret_number = new_secert_number();
        printf("A new number has been chosen.\n");
        read_guesses(secret_number);
        printf("play again?[Y/N]");
        scanf(" %c",&command);
        printf("\n");
    } while (command == 'y' || command == 'Y');

return 0;   
}

void initialize_number_generator(void)
{
    srand((unsigned)time(NULL));
}

int new_secert_number(void)
{
    return rand() % 100 + 1;
}

void read_guesses(int secret_number)
{
    int guess, num_guess = 0;
    for(;;){
        num_guess++;
        printf("enter guess:");
        scanf("%d",&guess);
        if(guess==secret_number){
            printf("you won in %d times!\n\n", num_guess);
            return;
        }
        else if(guess < secret_number){
            printf("too low;try again\n");
        }
        else{
            printf("too hign;try again\n");
        }
    }
}