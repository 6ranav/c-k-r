// Created on 4/12/26.
#include <stdio.h> //including the library
int main() //defining main
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}
