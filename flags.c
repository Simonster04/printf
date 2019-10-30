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
	char arg = '\0', *n = "(null)";
	unsigned char  *s = 0;

	switch (c)
	{
	case 'c':
		arg = va_arg(valist, int);
		_putchar(arg), bytes++;
		break;
	case 's':
		s = va_arg(valist, unsigned char*);
		if (s)
		{
			for (x = 0; s[x]; x++)
			{	_putchar(s[x]), bytes++;
			}
		}
		else
		{
		for (x = 0; n[x]; x++)
		{	_putchar(n[x]), bytes++;
			}
		}
	break;
	case 'd': case 'i':
		num = va_arg(valist, int);
		bytes += print_number(num);
	break;
	case '%':
		_putchar('%'), bytes++;
	break;
	case '\0':
		bytes = -1;
	break;
	default:
		_putchar('%'), bytes++;
	break;
	}
return (bytes);
}
