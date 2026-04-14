// Created on 4/15/26.
#include <stdio.h> //including the library
int main() //defining main func
{
    long x;
    x = 0;
    while (getchar() != EOF)
        x = x + 1 ;
    printf("%ld\n", x);
}
