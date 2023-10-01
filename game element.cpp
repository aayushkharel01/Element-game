#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_ELEMENT 20
#define POINTS_CORRECT 5
#define POINTS_INCORRECT -5



// Function to generate a random number between 1 and n
int generateRandomNumber(int n)
{

    return rand() % n + 1;
}

int main()
{
	srand(time(NULL));    
	    
    char elements[MAX_ELEMENT][20] = {"Hydrogen", "Helium", "Lithium", "Beryllium", "Boron",
                                      "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon",
                                      "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus",
                                      "Sulfur", "Chlorine", "Argon", "Potassium", "Calcium"};
    int number, score = 0, play_again;

    do {
        // Generate a random number between 1 and MAX_ELEMENT
        number = generateRandomNumber(MAX_ELEMENT);

        printf("Guess the name of the element that corresponds to the number %d (1 to %d): ", number, MAX_ELEMENT);
        char guessed_element[20];
        scanf("%s", guessed_element);

        // Check if the guess is correct
        if (strcmp(elements[number-1], guessed_element) == 0) {
            printf("Correct! The element corresponding to number %d is %s. You earned %d points.\n", number, elements[number-1], POINTS_CORRECT);
            score += POINTS_CORRECT;
        } else {
            printf("Sorry, that's incorrect. The element corresponding to number %d is %s. You lost %d points.\n", number, elements[number-1], POINTS_INCORRECT);
            score += POINTS_INCORRECT;
        }

        printf("Your score is now %d.\n", score);
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &play_again);

    } while (play_again == 1);

    printf("Thanks for playing! Your final score is %d.\n", score);

    return 0;
}

