#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char player_choice[20];
    char *choice[] = {"rock", "paper", "scissors"};
    int n = 3;
    int randomindex;

    srand(time(NULL));

    do
    {
        randomindex = rand() % n;

        printf("Enter step (rock/paper/scissors or exit): ");
        scanf("%s", player_choice);

        if (strcmp(player_choice, "exit") == 0)
        {
            break;
        }

        printf("Computer choice: %s\n", choice[randomindex]);

        if (strcmp(player_choice, "paper") == 0 && strcmp(choice[randomindex], "rock") == 0)
        {
            printf("Player wins\n");
        }
        else if (strcmp(player_choice, "rock") == 0 && strcmp(choice[randomindex], "scissors") == 0)
        {
            printf("Player wins\n");
        }
        else if (strcmp(player_choice, "scissors") == 0 && strcmp(choice[randomindex], "paper") == 0)
        {
            printf("Player wins\n");
        }
        else if (strcmp(player_choice, choice[randomindex]) == 0)
        {
            printf("Match is draw\n");
        }
        else if (
            strcmp(player_choice, "rock") == 0 ||
            strcmp(player_choice, "paper") == 0 ||
            strcmp(player_choice, "scissors") == 0)
        {
            printf("Computer wins\n");
        }
        else
        {
            printf("Please enter correct step\n");
        }

    } while (strcmp(player_choice, "exit") != 0);

    return 0;
}