#include <stdio.h>
/**
 * main - Entry program that prints all single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
