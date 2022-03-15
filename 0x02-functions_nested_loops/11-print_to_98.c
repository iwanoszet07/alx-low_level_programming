#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - mtd name to impliment
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nthg
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
