#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 1024
/*
* Vanya and Fence
* Problem: https://codeforces.com/problemset/problem/677/A
* this program calculates the width of the fence needed to
* cover all the people. some neeed to bend down, creating 2
* spaces, while others can stand up, creating 1 space.
* Today is 10 Apr 2025, Thursday. Istanbul, Turkey. 
*/

/*
* Main function: entry point of the program
* argc: count of command-line arguments
* argv: argument vector
*/

int main(int argc, char *argv[]) {
    // TODO: Add your program logic here.
    // For example, you might fill the buffer, process input, 
    // or execute other functions
    int n, h;
    int heights[1000];

    // Read the number of people and the height of the fence
    // read the height of each person
    // and store it in the heights array
    scanf("%d %d", &n, &h);
    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }
    
    // now check the height of each person
    // if the height is greater than the fence height
    // then add 2 to the width
    // otherwise add 1 to the width
    int width = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] > h) {
            width = width + 2;
        } else {
            width = width + 1;
        }
    }
    
    // print total width needed to cover all the people
    printf("%d\n", width);

    // to run it cd /path/to/your/code
    // clang 677A-Vanya_and_fence.c -o output
    // you have compiled the code
    // now run the output
    // ./output

    // to read the input from a file
    // clang 677A-Vanya_and_fence.c -o output < input.txt
    
    // Return success status
    return EXIT_SUCCESS;
}