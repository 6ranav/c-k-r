// Created on 4/13/26.
#include <stdio.h> //including the library
int main() //defining the main func
{
    int c;
    c = getchar();
    while (c != EOF) // eof = ctrl + d
    {
        putchar(c); //takes input and displays it until ctrl + d is used
        c = getchar();
    }
    return 0;
}