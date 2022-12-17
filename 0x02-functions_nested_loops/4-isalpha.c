#include "main.h"
/**
 * _isalpha - tests whether a character is an
 * alphanumeric letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a alphabetic letter, 0 if it is not an alphabetic letter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
