#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: The number to be inputed
 * Return: Absolute number of value or zero
*/

int _abs(int c)

{
	if (c < 0)
{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
}
	return (c);
}

