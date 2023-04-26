#include "main.h"

/**
 * print_sign - Print the sign of number
 * @n: The character we are checking out
 * Return: 1 for positive number or 0 for negative number
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
