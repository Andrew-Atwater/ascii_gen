/*
Andrew Atwater - canvasMake.c

This file's purpose is to generate a 2d array of random ascii characters, picking 80% spaces and 20%
characters from a hard coded list. It also has a function to print the resulting array, and free
memory dynamically allocated to create the array.

No direct help was received, although in-class code was referenced for syntax.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//picks a random number to serve as the index of the character we will print in the array, and returns that character.
//takes in the character list itself, and the size of it so that it knows the random number range.
static char pickChar(char *characterList, int size){
    //need to pick a number between 0 and the size of the list - 1 for an index
    int i = rand() % (size - 1);
    return characterList[i];
}   


//effectively flips a (lopsided) coin to see if we should print a space or a character, and returns the result.
//if a character is rolled, calls pickChar
//takes the chance to roll a character (an int 0-100, meant to represent a percentage), the list of characters, and the size of that character list.
static char genRandomChar(int chance, char *characterList, int size){
    int i = rand() % 100; // generates random number 0 - 100
    if(i <= chance){ // only if the computer rolls a number within the chance should a character be selected
        return pickChar(characterList, size);
    } else { // every other number triggers a space
        return ' ';
    }
}


//allocates necessary memory for a 2d array of characters, and populates it by calling the getRandomChar function.
//returns the 2d canvas array, and only needs the width and the height determined by the user to allocate the correct amount of memory and fill the array.
char **createCanvas(int width, int height){
    //we should allocate memory for rows and columns, starting with row pointers
    char **canvas = malloc(height * sizeof(char*)); //allocate memory of one character pointer per row 
    
    for(int i = 0; i < height; i++){
        canvas[i] = malloc(width * sizeof(char)); //allocate one character's worth of memory per column, for every row
    }

    char characterList[] = {'a', 'b', 'c', '1', '2', '3', '!', '@', '#', '$'};
    int size = sizeof(characterList);

    for(int j = 0; j < height; j++){
        for(int k = 0; k < width; k++){
            canvas[j][k] = genRandomChar(20, characterList, size);
        }
    }

    return canvas;
}

//iterates through every space in the canvas array and prints the character there
//prints a new line after every row
//parameters are the canvas and its width and height
void printCanvas(char **canvas, int width, int height){ //basically just iterate through every possible space and print what is in the canvas
    for(int row = 0; row < height; row++){
        for(int column = 0; column < width; column++){
            printf("%c", canvas[row][column]);
        }
        printf("\n");
    }
}

//frees the memory allocated in createCanvas
//parameters again are the canvas and its width and height
void freeCanvas(char **canvas, int width, int height){
    //first we need to free each column
    for(int i = 0; i < height; i++){
        free(canvas[i]);
    }
    //now row pointer
    free(canvas);
}

