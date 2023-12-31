#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, initilize with char c
 * @size: size of array
 * @c: specific char
 *
 * Return: pointer to the array or NULL it if fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a))
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
