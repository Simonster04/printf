#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: char with the specific format to be printed
 *
 * Return: 0 on success.
 */

int _printf(const char *format, ...)
{
	int i = 0, cont, z;
	char arg, *s;

	va_list valist;

	va_start(valist, format);

	for (cont = 0; format[cont] != '\0'; cont++)
	{
	}
	while (i < cont && cont != 0)
	{
		if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c' || format[i + 1] == '%'))
		{
			switch (format[i + 1])
			{
			case 'c':
			arg = va_arg(valist, int);
			write(1, &arg, 1);
			i++;
			break;
			case 's':
			s = va_arg(valist, char*);
			for (z = 0; s[z] != '\0'; z++)
				write(1, &s[z], 1);
			i++;
			break;
			case '%':
			arg = '%';
			write(1, &arg, 1);
			i++;
			break;
			default:
			break;
			}
		}
		else
		{
		write(1, &format[i], 1);
	}
	i++;
	}
	va_end(valist);
	return (cont);
}
