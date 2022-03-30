#include "main.h"

/**
 * _strlen_recursion - a function name to impliment task 2.
 * @s: An input string to printing
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
