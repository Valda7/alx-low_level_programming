#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and print the number
 * positive,negative or zero
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
		else
		if{lastdigit > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, lastDigit);
	}
		else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
