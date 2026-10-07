#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char pickChar(char *characterList, int size){
    //need to pick a number between 0 and the size of the list - 1 for an index
    int i = rand() % (size - 1);
    return characterList[index];
}   

char genRandomChar(char *characterList, int size){
    //80 - 20 split
    int i = rand() % 100; // generates random number 0 - 100
    if(i <= 20){ // only 0-20 trigger a character to be selected
        return pickChar(characterList, size);
    } else { // every other number triggers a space
        return ' ';
    }
}

void createCanvas(){
    
}

void printCanvas(){

}

void freeCanvas(){

}

