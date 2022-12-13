#include <stdio.h>
/**
 * main - Entry this task will write the alphabet in uppercase and in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char AZ;

	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);
}
