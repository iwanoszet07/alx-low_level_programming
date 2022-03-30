#include "main.h"

/**
 * _print_rev_recursion - a function name to impliment task 1.,
 * followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
