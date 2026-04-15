// Created on 4/12/26. - "Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0."
# include <stdio.h> //including the library
int main() //defining main
{
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) //printing it in reverse order
    {
        printf("%d\t%14.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}
