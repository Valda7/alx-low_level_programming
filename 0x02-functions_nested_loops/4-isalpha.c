#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character we are checking out
 * Return: 1 for alphabetic character or 0 for any other thing it returns
*/

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
	return (1);
}
	return (0);
}

