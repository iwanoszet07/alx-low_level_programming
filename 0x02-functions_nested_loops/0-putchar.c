#include <unistd.h>
#include "main.h"
/**
 * main - mtd name to impliment
 * Description: It prints the set of characters, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char setchar[6] = "School";
	int i;

	for (i = 0; i < 6; i++)
		_putchar(setchar[i]);
		_putchar('\n');

	return (0);
}
