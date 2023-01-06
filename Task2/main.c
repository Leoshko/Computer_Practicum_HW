#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


#define MAX_MISTAKES 6
#define MAX_WORD_LENGTH 100

char* words[] = { "apple", "terminal", "orange", "strawberry", "grape" , "rose", "pond", "helicopter", "dream", "night", "plot", "square"};
int num_words = (sizeof(words)/sizeof(words[0]));

int main () {   
    // Seed the random number generator
    srand(time(NULL));

    char* word = words[rand() % num_words];
    // printf("%s \n", word);
    int len_of_word = strlen(word);

    char guesses[MAX_WORD_LENGTH];
    int mistakes = 0;
    memset(guesses, 0, MAX_WORD_LENGTH); // memset is being used to initialize the guesses array to all zeros.
    // The function memset takes three arguments: a pointer to the block of memory to be filled, an integer value to be 
    // used as the fill value, and the number of bytes to be filled.

    while(mistakes < MAX_MISTAKES) {
        // Print the current state of the game
        printf("Your word: ");
        for (int i = 0; i < len_of_word; i++) {
            if (guesses[i]) {
                printf("%c", guesses[i]);
            } else {
                printf("_");  
            }
        }

        printf("\n");
        printf("Mistakes: %d/%d\n", mistakes, MAX_MISTAKES);

        // Read a guess from the player
        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // Update the state of the game based on the guess
        int found = 0;
        for (int i = 0; i < len_of_word; i++) {
            if (word[i] == guess) {
                guesses[i] = guess;
                found = 1;
            }
        }  
        if (!found) {  // ! is a NOT operator in C
            mistakes++;
        }
        // Check if the player has won
        int won = 1;
        for (int i = 0; i < len_of_word; i++) {
            if (!guesses[i]) {
            won = 0;
            break;
            }
        }
        if (won) {
        printf("You won! The word was '%s'.\n", word);
        break;
        }
    
    }

    // Check if the player has lost
    if (mistakes == MAX_MISTAKES) {
        printf("You lost! The word was '%s'.\n", word);
    }
    
    return 0;
}