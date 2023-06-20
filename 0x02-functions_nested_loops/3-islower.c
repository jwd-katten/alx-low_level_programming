#include "main.h"

/**
 * _islower -  check if the caratcter is lowercase
 * @c: The character to be checked
 *
 *
 * Return: Always 0 (Success)
*/

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
