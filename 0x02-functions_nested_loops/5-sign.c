#include "main.h"
/**
 * print_sign - tests whether a character is
 * positive or negative
 * @n: character to test.
 * Return: 1 if it is a positive, 0 if it is 0 and -1 if
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
