// Created on 4/12/26. - "Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table."
#include <stdio.h> //including the library
int main() //defining main
{
    /* for this we will be using the formula f = 9*(c+32)/5*/
    float fahr, cel;
    float lower, upper, step;
    upper = 300;
    lower = 0;
    step = 20;
    printf("Celsius\tFahrenheit\n");
    while (cel <= upper)
    {
        fahr = 9*(cel+32)/5;
        printf("%.1f\t%8.1f\n", cel, fahr);
        cel = cel + step;
    }
    return 0;
}