COS 135 HW 3: Point to the Picture
(20pts)
Homework Tasks:
In a new repository you are to create a random ascii picture generator that dynamically creates
a picture using command-line input dimensions.
If the user enters 10 for the height and 5 for the width, it should store a 2D array and print out
the 10x5 image to the screen.
For every space on this image:
80% of the time, an empty space should be chosen for each available space.
20% of the time, a random character from a list of valid characters should be chosen. This list of
valid characters can be hard-coded into the program.
Once the program has printed out the image, free the space.
Mini goals:
- Create a function that returns a random character from a list of characters sent to the
function. This function would need to take two parameters, the list and how many
characters are in the list.
- Create a function that would return a space 80% of the time, and the other 20% of the
time return a random character from the list. This function should take three parameters,
- Decimal chance that a random character is returned and not a space.
- List of random characters
- Size of list
- Set up gathering input from the command line and test that it worked properly (that you
converted into integer). Catch circumstances where the user gives the wrong number of
command-line arguments.
- Allocate the appropriate amount of memory for the character canvas.
- First, malloc out one dimension as an array of character pointers.
- For each of these indexes, malloc another array of characters. Assign this
allocation to each index of the first array. This completes the process of creating
an array of arrays.
- In a double loop, fill each element of the array with a random character or space using
the previously made function.
- In a double loop, print each character of the canvas.
- Free every part of the canvas (you will need to first free each row of the array, then the
entire 2d array).
Program requirements:
- There should be no user input except for the commandline input.
- The program should inform the user if they have the incorrect number of arguments.
- This is completed through github. You will submit a link to your public github
repository.
- Create consistent commits. If you’re walking through the mini-goals, each time you
successfully complete a small goal create a commit.
- Separate out your files into header and c files. In total you should have
(file and functions):
- main.c
- Only contains the main function that interprets the command line input
and calls other functions.
- Will call “createCanvas”, “printCanvas”, and “freeCanvas” in that order.
- canvasMake.c
- pickChar: a random character out of a provided list is picked and returned
- genRandomChar: returns either a space or a random character based on
the probability given (and the list).
- createCanvas: based on the two parameters width and height sent to the
function, returns a pointer to a canvas array (2d character array).
- printCanvas: accepts 3 parameters. Pointer to a canvas, width, and height
and prints off the canvas.
- freeCanvas: accepts 3 parameters. Pointer to a canvas, width and height.
The function frees the canvas from memory.
- canvasMake.h
- Only createCanvas, printCanvas, and freeCanvas should be imported by
other files. Use “static” appropriately to protect functions and arrays that
should not be seen by other files.
Submission Requirements:
- Submit a link to the github repository
- Submit a picture of a successful execution of your program.
Comment requirements:
- Comments before every function explaining the parameters, the return value, and the
mechanism of the function (its purpose).
- Comment at the top of each c file with your name, purpose of the file, and if you received
any help (and where).
Rubric
Successfully get input from command line and convert 2pts
Check for the right amount of command line arguments 1pt
Random character functions get the random character 3pts
Malloc the 2d array appropriately 3pts
Fill the 2d array with random characters 3pts
Print the 2d array to the screen 3pts
free the 2d array completely 3pts
Three files and they are named correctly 1pt
Code was commented (one point per file) 3pt