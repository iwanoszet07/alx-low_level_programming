#include "main.h"
#include <stdio.h>

/**
 * main - main mtd to impliment task 1.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
