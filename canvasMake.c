#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static char pickChar(char *characterList, int size){
    //need to pick a number between 0 and the size of the list - 1 for an index
    int i = rand() % (size - 1);
    return characterList[i];
}   

static char genRandomChar(int chance, char *characterList, int size){
    int i = rand() % 100; // generates random number 0 - 100
    if(i <= chance){ // only if the computer rolls a number within the chance should a character be selected
        return pickChar(characterList, size);
    } else { // every other number triggers a space
        return ' ';
    }
}

char **createCanvas(int width, int height){
    //we should allocate memory for rows and columns, starting with row pointers
    char **canvas = malloc(height * sizeof(char*)); //allocate memory of one character pointer per row 
    
    for(int i = 0; i < height; i++){
        canvas[i] = malloc(width * sizeof(char)); //allocate one character's worth of memory per column
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

char printCanvas(){

}

char freeCanvas(){

}

