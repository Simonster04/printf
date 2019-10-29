#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: The character to print
 *
 * Return: void.
 */

void print_number(int n)
{

	unsigned int temp;

	if (n >= 0)
	{
		temp = n;
	}
	else
	{
		temp = n * -1;
		_putchar('-');
	}

	if (temp / 10)
	{
		print_number(temp / 10);
	}

	_putchar((temp % 10) + '0');
}
