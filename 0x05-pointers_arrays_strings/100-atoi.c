#include "main.h"
#include <stdio.h>

/**
 * _atoi -mtd name to impliment task 10 
 * @s: An input string
 *
 * Return: integer value
 */


int _atoi(char *s)
{
int i, n, signe = 1;

i = n = 0;
while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
{
if (*(s + i) == '-')
signe *= -1;
i++;
}
while ((*(s + i) >= '0') && (*(s + i) <= '9'))
{
n = n * 10 + signe * (*(s + i) -'0');
i++;
}
return (n);
}
