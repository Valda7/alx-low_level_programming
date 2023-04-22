#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int in;

	for (in  = 48; in  < 58; in++)
	{
		putchar(in);
	}
	for (in  = 97; in  < 103; in++)
	{
		putchar(in);
	}
	putchar('\n');
	return (0);
}
