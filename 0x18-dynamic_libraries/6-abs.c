#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i: the number to be checked.
 * Return: integer
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
