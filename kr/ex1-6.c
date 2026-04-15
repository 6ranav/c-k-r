// Created on 4/13/26. - "Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1"
#include <stdio.h> //including the library
int main() //defining the main func
{
    int c;
    printf("%d\n", (getchar() != EOF)); //checking if EOF is 0 or 1
    return 0;
}

