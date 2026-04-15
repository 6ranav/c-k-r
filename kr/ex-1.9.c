// Created on 4/16/26. "Exercise 1-9. - Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank"

#include <stdio.h> //including the library
int main() //defining the main func
{
    int c, last; //declaring 2 variables, one to hold current char and one to hold prev char
    last = 0; //initial value 0
    while ((c = getchar()) != EOF)
    {
        if (c != 32) //if current char is not a space, it will print the current char
        {
            putchar(c);
            last = c;
        }
        else if (c == 32 && last != 32) //if current char is a space and prev char wasnt a space, it will print the current char
        {
            putchar(c);
            last = c;
        }
    }
    return 0; //return 0 as usual
}