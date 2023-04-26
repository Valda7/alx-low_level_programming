#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 * follwed by a new file
 * Return : Always (0) success
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
