#include "holberton.h"
#include <stdio.h>
#include <string.h>
int main ()
{

 int a = 0;

a = printf("hola\n");
printf("%d\n", a);
a = _printf("hola\n");
_printf("%i\n", a);
_printf("%d\n", 56);
_printf("%i\n", -78);
_printf("hola %c\n", 'H');
printf("hola %c\n", 'H');
_printf("%c\n", 'O');
printf("%c\n", 'O');
_printf("hola %s\n", "mundo");
printf("hola %s\n", "mundo");
_printf("%s\n", "Hola mundo");
printf("%s\n", "Hola mundo");
_printf("%c%s", 'L', "C y S juntos\n");
printf("%c%s", 'L', "C y S juntos\n");
_printf("hola %c mundo\n", 'Y');
printf("hola %c mundo\n", 'Y');
_printf("%e\n");
_printf("%c\n");

_printf("hola %%\n");
printf("hola %%\n");

_printf("hola %%%c\n", 'H');
printf("hola %%%c\n", 'H');

_printf("%c         %c\n", 'a', 'b');
printf("%c         %c\n", 'a', 'b');

_printf("            hola\n");
printf("            hola\n");

_printf("hola[%c]\n", 'H');
printf("hola[%c]\n", 'H');

_printf("%%%%%%%s\n", "hola");
printf("%%%%%%%s\n", "hola");

_printf("%c %c\n", 'a');
printf("%c %c\n", 'a');

_printf("%e\n");
printf("%e\n");

_printf("%c\n");
printf("%c\n");

_printf("");
printf("");

_printf("%a%z%c%%\n", 'H');
printf("%a%z%c%%\n", 'H');

_printf("(null)");
printf("(null)");

_printf("'\0'\n");
printf("'\0'\n");

_printf("1 + 1\n");
printf("1 + 1\n");

_printf("#$%%hola\n");
printf("#$%%hola\n");

_printf("hola\n");
_printf("%");

_printf("%s\n", "hola");

printf("%s\n", "");
_printf("%c", 'H');
_printf("%s");
_printf("hola");

_printf("hola %s", "");

return (0);

}
