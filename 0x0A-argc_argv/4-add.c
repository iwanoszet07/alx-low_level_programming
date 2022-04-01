#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main mtd to impliment task 4.
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
puts("Error");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
