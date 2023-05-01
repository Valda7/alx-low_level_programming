#include "main.h"

/**
 *  _isupper - This checks if the letters are in uppercase
 *  @c: input.
 *
 *  Return: 1 if c is uppercase
 *  0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
