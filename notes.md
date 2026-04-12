# concepts
in c, a program (whatever its size) consists of functions and variables, a function specifies the computing operations to be done, the variables store the values used during the computation.

normally you are allowed to give functions any name you like, but there is one that is special - the main() function, this is where your program begins executing.

main() will usually call other functions to help perform its job, some that you wrote and defined yourself and some others that are from libraries provided to you.

the first line of the program tells the compiler to include information about the standard input/output library (stdio) or any other library that you are using.

example: #include <stdio.h> 

one method of communicating data between functions is for the calling function to provide a value or a list of values, these are called **arguments**. the parentheses after the function name surround the argument list.

in this example, main() is a function that expects no arguments (which is indicated by the empty list)

**note:** 

\n is used to jump to a new line, also known as newline character or escape sequence.

in c, all variables need to be declared before use, usually before the function starts executing any statements.

the process is <data_type> <variable_name> = (<- assignment operator) value (for static declaration, you can use scanf for dynamic)

there are a few basic data types in c which are predefined, each with a different size in memory

-> **char** - 1 byte (8 bits) - holds just a single character like 'a' or 'b' (anything in b/w the quotes that is a single character). 

-> **short** - 2 bytes (16 bits) - this is a smaller integer, with a range of -32768 to +32767, not widely used but useful for memory-constrained situations.

-> **int** - 4 bytes (32 bits) - this is the standard integer, with a range of -2147483648 to + 2147483647, very widely used.

-> **long** - 8 bytes (64 bits) - a bigger integer value when int isnt enough, the range is really big, around -9.2 quintillion to +9.2 quintillion.

-> **float** - 4 bytes (32 bits) - these are decimal numbers, a float has around 5-7 significant digits of precision.

-> **double** - 8 bytes (64 bits) - decimal numbers but with more precision, it has around 15-16 significant digits of precision and is the default choice when you need decimal for serious code.

**note:** the reason why in the ranges, the negative value is *larger* than the positive side (i.e -32768 to +32767 or -2147483648 to +2147483648) is because the leftmost bit is used for the sign, so in a 32-bit data type, the value only goes up to 2^31, and the leftmost bit holds the sign so 2^31 on the negative side and 2^31 on the positive side, here the 0 value counts towards the positive side, hence you see that the literal value of the positive side is lower when compared to the negative side. they both hold the same number of values but 0 is included with the positive ones. you can use an unsigned integer if you want all 2^32 distinct values to be positive. 

in a loop, for example while loop, the statement doesn't end with a ; but continues over to the next line and you need to use braces depending on the function you want it to perform. if it is just a single line of code that it executes when the loop condition is true, you don't need to use any braces (just go over to the next line and write it with indentation) but when the operation requires several lines of code, you need to enclose them in braces. however it is recommended to use braces either way for cleaner code.

**note:** if an arithmetic operation has both or multiple integer values, an integer operation is performed, however, if there is at least 1 floating point value, the integers are converted to floating point values and a floating point operation is performed. 

you can specify how many characters wide a value can be printed in the printf statement when you print a number (for example %3d is 3 characters wide and %6d is 6 characters wide, the same can be done with floating point values). however, in floating point values if you want to specify how many digits need to be printed after the decimal point you can use %<x>.<y>f where x is the width and y is the number of digits after the decimal point, for example iif the output is 17.888881 but you only want to display 17.8 you use %.1f (saying only 1 digit after the decimal point needs to be printed, and leaving the x empty means you don't need it to print the value with a width of multiple character spaces).

the printf and other standard library functions recognize the following specifications:

1. **%d** - integer
2. **%f** - float
3. **%c** - char 
4. **%x or %X** - hexadecimal (%x for lowercase - 2a, %X for uppercase - 2A) 
5. **%o** - octal
6. **%s** - string
7. **%%** - % itself
8. **%i** - same as %d
9. **%p** - pointer address
10. **%u** - unsigned integer
11. **%ld** - long integer
12. **%hd** - short integer

there are more such as %e for scientific notation and %lu or %hu for unsigned long or short integers, but they are not that widely used.

the for loop is a generalization of the while loop, within the parentheses there are three parts:
1. the initialization
2. the condition
3. the increment

so it looks something like this - for(initialization (x = 0); condition (x <= 300); increment (x=x+20), these are seperated by semicolons.

# errors and fixes
1 -> did not declare function type while writing code

error: return type defaults to ‘int’ [-Wimplicit-int] | main()

fix: declare int while calling the main() function -> int main(), and end with return 0;. this is because in c, every function must declare what type it returns. in the case of main(), it needs to return the integer 0 to tell the os that the execution was successful, any other integer and it means there was a problem somewhere (example- returning 1 means its a general error, returning 2 means misuse of shell command or invalid arguments, returning 127 means the command was not found). this is *usually* not a problem, but i compiled it using my terminal with gcc, and i have -Wall and -Wextra enabled, meaning the compilation is strict and the warnings are treated as actual errors.

2 -> part of ex 1.2, using unknown escape sequences 

error: ex-1.2.c: In function ‘main’:
ex-1.2.c:9:18: warning: unknown escape sequence: ‘\z’
9 |     printf("\z\n");
|                  ^
ex-1.2.c:10:18: warning: unknown escape sequence: ‘\q’
10 |     printf("\q\n");
|                  ^

fix: just don't use them, here (in ex-1.2.c) \a and \b didn't show an error because they are valid escape sequences from the standard library but \z and \q did. 