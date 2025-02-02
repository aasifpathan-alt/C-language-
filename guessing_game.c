#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int guess, random;
    int number = 0;
    srand(time(NULL));

    printf("WELCOME TO THE GUESSING WORLD!\n");
    printf("NOW,COMPUTER WILL CHOOSE THE NUMBER & YOU HAVE TO GUESS THE NUMBER\n");
    random = rand()  % 100 +1;

    do
    {
        printf(" enter the guessing number betwen (1 to 100) :\n");
        scanf("%d", &guess);
        number++;

        if (guess<random)
        {
            printf("guess a larger number!\n");
        }
        else if (guess>random)
        {
            printf("guess a smaller number!\n");
        }
        else
        {
            printf("congratilations you suceed the game !\n");
            printf("you win the game in just %d attempts  \n", number);
        }

    } while (guess != random);

    printf(" bye bye , thanks for playing with me ....\n");
    printf(" developed by : md aasif ali khan \n");
}