#include "holberton.h"
#include <stdio.h>

int main()
{

_printf("%%\n");
printf("%%\n");

_printf("%");
printf("%");

_printf("%%r\n");
printf("%%r\n");

_printf("hello%%\n");
printf("hello%%\n");

_printf("minehello%");
printf("minehello%");

_printf("hello%r\n");
printf("hello%r\n");

_printf("mineUnknown:[%r]\n");
printf("mineUnknown:[%r]\n");

_printf("mineCharacter:[%c]\n", 'H');
printf("mineCharacter:[%c]\n", 'H');

_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');

_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");

_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");

return (0);
}
