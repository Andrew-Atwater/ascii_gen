#include <stdio.h>
#include <stdlib.h>
#include "canvasMake.h"

int main(int argc, char **argv){
    if(argc != 3){
        printf("You need to include the dimensions of the grid as two arguments.");
        return -1;
    }
    
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);

    char canvas[][] = createCanvas(width, height);
    
    printCanvas(canvas);

    freeCanvas(canvas);

    return 0;
}