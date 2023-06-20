#include "main.h"

/**
 * print_alphabet - print alphabet
 * main - no parametre
 * print_alphabet - use a for function using index ASCII
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
