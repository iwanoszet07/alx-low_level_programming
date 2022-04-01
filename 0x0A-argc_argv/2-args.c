#include "main.h"
#include <stdio.h>

/**
 * main - main mtd to impliment task 2.
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
