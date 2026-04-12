// Created on 4/12/26 - "Exercise 1-1. Run the ``hello, world'' program on your system. Experiment with leaving out parts of the program, to see what error messages you get."

#include <stdio.h> //including information about a library for the compiler, standard input/output in this case
int main() //defining the main function - the execution begins from here
{
    printf("hello, world\n");
    printf("hello, ");
    printf("world");
    printf("\n");
    printf("1234567890qwertyuiopasdfghjklzxcvbnm,./;'[]-=\n"); //just testing other stuff out
    return 0; //returning 0 - the integer which the os treats as success
}
