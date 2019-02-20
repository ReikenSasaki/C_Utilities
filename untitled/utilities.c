#include "utilities.h"

/**
 * clear the screen with windows, linux or macos
 */
void clearscreen (void) {
    #ifdef WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

/**
 * initialize the seed for use rand()
 */
void seedInit() {
    srand(time(NULL));
}

/**
 * Generates a number between min and max
 * @param min The lower value
 * @param max The higher value
 * @return A value between min and max
 */
int random(int min, int max) {
    return min + rand()%(max-min+1);
}

/**
 * Get a random face between the inserted faces
 * @param faces Number of faces in the dice
 * @return A casual face
 */
int trowADice (int faces) {
    return random(1, faces);
}

/**
 * Makes a delay of ms milliseconds
 * @param ms Milliseconds of delay
 */
void delay (int ms) {
    clock_t timeDelay = ms + clock();
    while (timeDelay > clock());
}
