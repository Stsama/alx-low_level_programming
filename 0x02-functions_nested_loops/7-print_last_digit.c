#include "main.h"
/**
 *print_last_digit - give the last digit of a number
 * @n: the integer to be converted.
 * Return: last value of the input number.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
