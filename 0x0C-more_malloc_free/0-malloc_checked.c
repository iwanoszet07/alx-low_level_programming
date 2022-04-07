#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function name to impliment task 0.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
