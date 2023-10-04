#include "main.h"

/**
 * _puts - function that print a string, followed by a new line
 * to stdout
 * @str: string variable
**/

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
