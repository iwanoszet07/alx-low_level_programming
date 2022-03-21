#include "main.h"

/**
 * _strcpy - mtd name to impliment task 9,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = src[i];
return (dest);
}
