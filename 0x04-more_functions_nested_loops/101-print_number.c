#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 * Return: Nothing;
 */

void print_number(int n)

{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('-');
	}
	k /= 10;
	
	if (k != 0)
	print_number(n2 / 10);
	_putchar((unsigned int) n % 10 + '0');
}
