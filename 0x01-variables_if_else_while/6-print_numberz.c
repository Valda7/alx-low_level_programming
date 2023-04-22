#include <stdio.h>
#include <ctype.h>

/**
 * main - main block
 * Description: Prints all single digit numbers of base 10
 * positive,negative or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

