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
#include <stdbool.h>


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

        

    }

    // garbage collection
    free(gameResult);
    free(gameData);
    
    return 0;

}