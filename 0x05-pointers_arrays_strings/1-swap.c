#include "main.h"

/**
 * swap_int - unction that swaps the values of two integers
 * @a: pointer number one
 * @b: ponter number two
**/

void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
