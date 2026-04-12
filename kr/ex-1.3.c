// Created on 4/12/26. - "Exercise 1-3. Modify the temperature conversion program to print a heading above the table."
#include <stdio.h> //including the library
int main() //defining main
{
    float fahr, celsius; //declaration of the variables for celsius and fahrenheit
    float upper, lower, step; //declaration of the upper and lower limits in temp, with a step

    upper = 300; //temp has an upper limit of 300
    lower = 0; //temp has a lower limit of 0
    step = 20; //the step value is 20 here

    fahr = lower; //fahr starting from the lower limit of temp, increasing by the step value until the upper limit is reached
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) //looping until the condition is met
    {
        celsius = 5*(fahr-32)/9;
        printf("%.1f\t%14.1f\n", fahr, celsius); //using 14 as the ch width for celsius values to match the heading alignment
        fahr = fahr + step; //fahr increases by 20 after every loop exec
    }
    return 0;
}
