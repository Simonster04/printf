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
	int i = 0, cont, bytes = 0;
	char arg, *s;

	va_list valist;
if (format == NULL)
{return (-1); }
	va_start(valist, format);

	for (cont = 0; format[cont] != '\0'; cont++)
	{
	}
	while (i < cont)
	{
		if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c'
			|| format[i + 1] == '%' || format[i + 1] == ' '))
		{
			while (format[i + 1] == ' ')
			{i++; }
			switch (format[i + 1])
			{
			case 'c':
			arg = va_arg(valist, int);
			if (arg != '\0')
			{
			write(1, &arg, 1);
			i++;
			bytes += 1;
			break; }
			else
			{return (-1); }
			case 's':
			s = va_arg(valist, char*);
			for (bytes = 0; s[bytes] != '\0'; bytes++)
				write(1, &s[bytes], 1);
			i++;
			break;
			case '%':
			arg = '%';
			write(1, &arg, 1);
			i++;
			bytes += 1;
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
	return (bytes);
}
