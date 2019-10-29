#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: The character to print
 *
 * Return: void.
 */

int print_number(int n)
{

	unsigned int temp;
	int bytes = 0;

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
		bytes += 1;
		print_number(temp / 10);
	}

	_putchar((temp % 10) + '0');

	return (bytes);
}
