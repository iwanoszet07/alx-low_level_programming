#include "main.h"
#include <stdio.h>

/**
 * main - main mtd to impliment task 0.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
