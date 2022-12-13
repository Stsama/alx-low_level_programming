#include <stdio.h>
/**
 * main - Entry this program prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al == 'e' || al == 'q')
		{
			continue;
		}
		putchar(al);
	}
	putchar('\n');
	return (0);
}
