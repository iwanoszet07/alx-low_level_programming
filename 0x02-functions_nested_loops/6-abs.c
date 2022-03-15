#include "main.h"
/**
 *_abs - mtd name to impliment
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
