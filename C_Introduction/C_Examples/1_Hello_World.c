/*
** Author - Partho Chakravarty
** Date - Sep 16, 2021
*/

/*
** To understand this example, you should have the knowledge of the following C programming topics:
** > C Input Output (I/O)

** How "Hello, World!" program works?
** Program to print "Hello World" in the output screen of the terminal.
*/

// This is a single line comment.
/* This is a 
multiline comment. */
// Comments are only for humans to read, these are completely ignored by the compiler.

/*
** The #include is a preprocessor command that tells the compiler to include
** the contents of stdio.h (standard input & output) file in the program.
** The stdio.h file contains functions such as scanf() & printf() to take
** input and display output respectively. If you use printf() function without
** writing #include <stdio.h>, the program will not compile.
*/
#include <stdio.h>

// The execution of a C program starts from the main() function.
int main()
{
    /*
    ** printf() is a library function to send formatted output to the screen.
    ** In this program, printf() displays Hello, World! text on the screen.
    ** Here, printf() displays the string inside the quotation.
    ** \n -> Newline (It moves the cursor to the next line.)
    */
    printf("Hello, World!\n");
    
    /*
    ** The return 0; statement is the "Exit Status" of the program.
    ** In simple terms, the program ends with this statement.
    ** The return 0; terminates the main() function and returns the value 0.
    ** The return 0 statement, returns execution status to the OS. The 0 value
    ** is used for successful execution and 1 for unsuccessful execution.
    */
    return 0;
}
