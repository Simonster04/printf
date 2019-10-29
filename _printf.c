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
	va_list valist;
	int i = 0, bytes = 0;
	char arg, *s, percent = '%';

	if (format == NULL)
	{return (-1); }
	va_start(valist, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0')
		{return (-1); }
		if (format[i] == '%')
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
				if (s != NULL)
				{
					for (bytes = 0; s[bytes] != '\0'; bytes++)
						write(1, &s[bytes], 1);
				}
			i++;
			break;
			case '%':
			arg = '%';
				write(1, &arg, 1);
			i++;
			bytes += 1;
			break;
			default:
			/*write(1, &percent, 1);*/
			break;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(valist);
	return (bytes);
}
