#include <stdio.h>
/**
 * main - Entry hexadecimal
 * Return: Always 0 (success)
 */
int main(void)
{
	int la;

	char le;

	for (la = 0; la < 10; la++)
	{
		putchar((la % 10) + '0');
	}
	for (le = 'a'; le < 'g'; le++)
	{
		putchar(le);
	}
	putchar('\n');
	return (0);
}
