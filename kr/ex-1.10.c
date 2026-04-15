// Created on 4/16/26. - "Exercise 1-10. - Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\."

#include <stdio.h> //including the library
int main() //defining the main func
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t') //if current char is a tab, it replaces with '\t'
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\') //if current char is a backslash, it replaces with
        {
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\b') //if current char is a backspace, replaces with '\b'
        {
            putchar('\\');
            putchar('b');
        }
        else
        {
            putchar(c); //if none of them, it just prints the character
        }
    }
    return 0; //return 0 as usual
}

