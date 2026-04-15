// Created on 4/15/2026 - "Exercise 1-8. Write a program to count blanks, tabs and newlines"

#include <stdio.h> //including library
int main() //defining main func
{
	int c, x;
	x = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == 32 || c == 10 || c == 9) //ascii values for blank, newline and tab
			x++;	//increment
	}
	printf("%d\n", x);
	return 0;
}