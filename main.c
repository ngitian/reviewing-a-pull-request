/* Yitian Huang, system programming, 02/28/2022
print menu, read and run different inputs
1-start a game
    prompt user input, if correct, go back to menu, else
    tell user too high or too low. if enter q, return to menu.
    keep track of nubmer of guesses.
2-change max number
3-quit
    thanks user for playing
    print out number of guesses required to win
    if quit game, indicate lost game
    end game
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// prototype
void endGame(int gameCounter, const bool* gameResult, const int* gameData);

int main() 
{
    // initialize menu prompt
    const char MENU[] = "Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n";

    // initialize game loop condition
    bool playing = true;

    // initialize user menu input, and information and data about game
    char menuInput[10];
    int maxNumber = 10;
    int gameCounter = 0;
    bool* gameResult = malloc(10 * sizeof(bool));
    int* gameData = malloc(10 * sizeof(int));

    // start game loop
    while (playing)
    {
        // prompt menu and user input
        printf("%s", MENU);
        printf("Enter input: ");
        scanf("%s", menuInput);

        // run different options depends on the menu input
        if (strcmp(menuInput,"1") == 0)
        {
        } 
        else if (strcmp(menuInput,"2") == 0)
        {
        }
        else if (strcmp(menuInput,"3") == 0)
        {
            endGame(gameCounter, gameResult, gameData);
            playing = false;
        }
        else
        {
            printf("Incorrect Input\n");
        }

    }

    // garbage collection
    free(gameResult);
    free(gameData);
    
    return 0;

}

void endGame(int gameCounter, const bool* gameResult, const int* gameData)
{
    // thank the player
    printf("Thanks for playing number guessing game\n");

    // output result
    for (int i = 0; i < gameCounter; ++i)
    {
        printf("game %d: win/lose with %d rounds\n", i, gameData[i]);
    }

}