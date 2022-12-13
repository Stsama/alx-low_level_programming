#include <stdio.h>
/**
 * main - Entry alphabet reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
