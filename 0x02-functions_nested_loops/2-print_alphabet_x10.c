#include "main.h"

/**
 * print_alphabet_x10 -  print the alphabet 10 times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10  ; i++)
	{
		int ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
