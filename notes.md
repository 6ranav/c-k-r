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