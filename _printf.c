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
	char arg = '\0';
	int i, x, num = 0, bytes = 0;
	unsigned char  *s = 0;

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
			_putchar(arg);
			i++;
			break;
			case 's':
			s = va_arg(valist, unsigned char*);
				if (s)
				{
				for (x = 0; s[x]; x++)
				{	_putchar(s[x]);
					bytes++;
				}
				}
			bytes--;
			i++;
			break;
			case 'd': case 'i':
			num = va_arg(valist, int);
			bytes += print_number(num);
			bytes--;
			i++;
			break;
			case '%':
			_putchar('%');
			i++;
			break;
			case '\0':
			bytes = -2;
			break;
			default:
			_putchar('%');
			break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	bytes++;
	}
	va_end(valist);
	return (bytes);
}
