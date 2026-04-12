
// Created by hua on 4/12/26 - "Exercise 1-2. Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above."

#include <stdio.h> //including the library as usual
int main() //defining main but with int as the return type now
{
    printf("\a\n");
    printf("\b\n"); //using an escape that doesn't exist or aren't included in the standard library
    printf("\z\n");
    printf("\q\n");
    return 0; //returning 0
}