#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateradomnumber(int n)
{
    srand(time(NULL)); // srand takes the direct number from the time usng the library time.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{

    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dist[] = {'r', 'p', 's'};
    printf("\n\n\n\t\t\t\tWELCOME TO THE  ROCK , PAPER  AND  SCISORRS  GAME\n\n\n ");
    printf("\t\t\t\tCHOOSE 1 FOR ROCK , 2 FOR PAPER AND 3 FOR SCISSOR\n\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\t\t\t\tplayer'sturn :\n");
        scanf("%d", &temp);
        playerchar = dist[temp - 1];
        printf("\t\t\t\tyou choose %c\n", playerchar);

        getchar();

        printf("\t\t\t\tcomputer's turn :\n");
        temp = generateradomnumber(3) + 1;
        compchar = dist[temp - 1];
        printf("\t\t\t\tcpu choose %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("\t\t\t\tcpu got it!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            playerscore += 1;
            compscore += 1;
            printf("\t\t\t\tits a draw!\n");
        }
        else
        {
            playerscore += 1;
            printf("\t\t\t\tyou got it!\n");
        }
        printf("you:%d\ncpu:%d\n", playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("\n\n\n\n\t\t\t\tyou win the game !!! hurrah!! \n");
    }
    else if (compscore > playerscore)
    {
        printf("\n\n\n\n\t\t\t\tcpu win the game  \n you lost it !!!!! play again \n");
    }
    else
    {
        printf("\n\n\n\n\t\t\t\tthis match is tie play again \n");
    }

    return 0;
}
