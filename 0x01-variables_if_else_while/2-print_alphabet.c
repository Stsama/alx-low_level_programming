#include <stdio.h>
/**
 * main - Entry this programs writes the complete aphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
