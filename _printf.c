#include <unistd.h>
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
	int i, bytes = 0;
	char arg = '\0';
	unsigned char *s = 0, null = 0;

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
			switch (format[i + 1])
			{
			case 'c':
			arg = va_arg(valist, int);
			write(1, &arg, 1);
			i++;
			bytes++;
			break;
			case 's':
			s = va_arg(valist, unsigned char*);
				if (s)
				{
				for (bytes = 0; s[bytes]; bytes++)
				{
					write(1, &s[bytes], 1);
				}
				bytes++;
				}
				else
				{
					write(1, &null, 1);
				}
			i++;
			break;
			case '%':
			arg = '%';
				write(1, &arg, 1);
			i++;
			bytes++;
			break;
			case '\0':
			bytes -= 1;
			break;
			default:
			arg = '%';
			write(1, &arg, 1);
			break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			bytes++;
		}
	}
	va_end(valist);
	return (bytes);
}
