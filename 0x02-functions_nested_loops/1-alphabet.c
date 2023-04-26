#include "main.h"

/**
 * Description: Print alphabet in lowercase
 * followed by a new line
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
