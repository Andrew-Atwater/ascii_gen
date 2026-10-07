/*
Andrew Atwater - main.c

This file uses the functions in canvasMake.c to assemble the canvas of characters. 

No help was needed for this file.
*/

#include <stdio.h>
#include <stdlib.h>
#include "canvasMake.h"
#include <time.h>

int main(int argc, char **argv){
    if(argc != 3){
        printf("You need to include the dimensions of the grid as two arguments."); //program execute, width, height
        return 1;
    }
    
    srand(time(NULL));

    int width = atoi(argv[1]);
    int height = atoi(argv[2]);

    char **canvas = createCanvas(width, height); //create a 2d character array with the dimensions specified with CL
    
    printCanvas(canvas, width, height);

    freeCanvas(canvas, width, height);

    return 0;
}