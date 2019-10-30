#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: char with the specific format to be printed
 *
 * Return: 0 on success.
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int i, bytes = 0;

	if (!format)
	{return (-1); }

	va_start(valist, format);

	for (i = 0; format[i]; i++)
	{
		if (!format[i])
		{return (-1); }
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
			{i++; }
			bytes += flags(format[i + 1], &valist);
			i++;
		}
		else
		{
			_putchar(format[i]);
			bytes++;
		}
	}
	va_end(valist);
	return (bytes);
}
