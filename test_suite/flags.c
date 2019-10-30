#include <stdarg.h>
#include "holberton.h"

/**
 * flags - choice the correct flag according to the format
 * @c: char with the specific format to be printed
 * @valist: va_list variable
 *
 * Return: amount of bytes
 */

int flags(char c, va_list *valist)
{
	int bytes = 0, x, num = 0;
	char arg = '\0';
	unsigned char  *s = 0;

	switch (c)
	{
	case 'c':
		arg = va_arg(valist, int);
		_putchar(arg);
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
	break;
	case 'd': case 'i':
		num = va_arg(valist, int);
		bytes += print_number(num);
		bytes--;
	break;
	case '%':
		_putchar('%');
	break;
	case '\0':
		bytes = -2;
	break;
	default:
		_putchar('%');
	break;
	}
return (bytes);
}
