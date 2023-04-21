#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry point
 * Description: "This completes the source code in order to print whether the
 * number stored in the variable n is positive or negative, if else."
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("Number %d is positive\n", n);
	else if (n < 0)
		print ("Number %d is negative\n", n);
	else
		printf("Number %d zero\n")
	return (0);
}
