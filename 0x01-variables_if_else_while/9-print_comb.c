#include <stdio.h>
/**
 * main - Entry number with comma
 * Return: Always 0 (success)
 */
int main(void)
{
	int la;

	for (la = 0; la < 10; la++)
	{
		putchar(la + '0');
		if (la < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
