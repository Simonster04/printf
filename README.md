# PRINTF	

## Description

The _printf() function produce output according to a format as described below. The function _printf() writes output to stdout, the standard output stream. This function writes the output under the control of a format  string  that  specifies  how  subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

## File contents

|               File                    |              Description              |
| ------------------------------------- | ------------------------------------- |
| _printf.c                             | The function that prints              |
| print_number.c                        | print function for numbers            |
| _putchar.c                            | function for printing one character   |
| holberton.h                           | Library file                          |


## Function descriptions

|               Function                |              Description              |
| ------------------------------------- | ------------------------------------- |
| int print_number(int n);              | prints an integer.                    |
| int _printf(const char *format, ...); | produces output according to a format |
| int _putchar(char c);                 | writes the character c to stdout      |


## Compilation

It was compilate with `gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c`.

## Example

**int main ()**

**{ _printf("Hello %s", "Holberton");**

**return(0); }**

Output: 

`Hello Holberton`

## Authors

Alejandro Arbelaez and Simon Parra.
