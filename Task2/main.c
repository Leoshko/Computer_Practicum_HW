#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>


#define MAX_MISTAKES = 6

int main (void) {
    char* words[] = { "apple", "terminal", "orange", "strawberry", "grape" , "rose", "pond", "helicopter", "dream", "night", "plot", "square"};
    int num_words = (sizeof(words)/sizeof(words[0]));
    
    srand(time(NULL));

    char* word = words[rand() % num_words];
    printf("%s \n", word);
    printf("Your word: ");
    
    for (int i = 0; i < strlen(word); i++) {
        printf("_");
    }
}
