// Created on 4/12/26.
#include <stdio.h> //including the library
int main() //defining main
/* this is the code to convert farenheit values to celsius in a tabular format, we will be using the formula celsius = 5/9 * (fahr - 32) for this */
{
    int fahr, celsius; //declaration of the variables for celsius and fahrenheit
    int upper, lower, step; //declaration of the upper and lower limits in temp, with a step

    upper = 300; //temp has an upper limit of 300
    lower = 0; //temp has a lower limit of 0
    step = 20; //the step value is 20 here

    fahr = lower; //fahr starting from the lower limit of temp, increasing by the step value until the upper limit is reached
    while (fahr <= upper) //looping until the condition is met
    {
        celsius = 5*(fahr-32)/9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step; //fahr increases by 20 after every loop exec

        /* but this is not accurate as 0f = -17.8c not -17, to get the accurate answers we need to use floating point data types for them, which we will in the next few lines. */
    }

    float fahr_accurate, celsius_accurate; //declaration of the variables for celsius and fahrenheit 9float values now)
    float upperf, lowerf, stepf; //declaration of the upper and lower limits in temp, with a step (float values now)

    upperf = 300; //temp has an upper limit of 300
    lowerf = 0; //temp has a lower limit of 0
    stepf = 20; //the step value is 20 here

    fahr_accurate = lowerf; //fahr starting from the lower limit of temp, increasing by the step value until the upper limit is reached
    while (fahr_accurate <= upperf) //looping until the condition is met
    {
        celsius_accurate = 5*(fahr_accurate-32)/9;
        printf("%.1f\t%.1f\n", fahr_accurate, celsius_accurate);
        fahr_accurate = fahr_accurate + stepf; //fahr increases by 20 after every loop exec
    }
    return 0; //returning 0
}
