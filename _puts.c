#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to print
 *
 * Return: no return.
 */

int _puts(unsigned char *str)
{

int cont = 0;

while (*str != '\0')
{
_putchar(str[0]);
str++;
cont++;
}
_putchar('\n');

return (cont);
}

