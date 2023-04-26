#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character we are checking out
 * Return: 1 for lowercase character or 0 for any other thing it returns
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	return (0);
}

