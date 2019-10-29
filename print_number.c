#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: The character to print
 *
 * Return: void.
 */

int print_number(int n)
{

	unsigned int temp, bytes = 0;

	if (n >= 0)
	{
		temp = n;
	}
	else
	{
		bytes += 1;
		temp = n * -1;
		_putchar('-');
	}

	if (temp / 10)
	{
		print_number(temp / 10);
	}

	_putchar((temp % 10) + '0');
	bytes += 1;
	return (bytes);
}
