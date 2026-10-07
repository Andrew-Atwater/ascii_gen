#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static char pickChar(char *characterList, int size){
    //need to pick a number between 0 and the size of the list - 1 for an index
    int i = rand() % (size - 1);
    return characterList[index];
}   

static char genRandomChar(int chance, char *characterList, int size){
    int i = rand() % 100; // generates random number 0 - 100
    if(i <= chance){ // only if the computer rolls a number within the chance should a character be selected
        return pickChar(characterList, size);
    } else { // every other number triggers a space
        return ' ';
    }
}

char **createCanvas(){
    //we should allocate memory for rows and columns

}

char printCanvas(){

}

char freeCanvas(){

}

