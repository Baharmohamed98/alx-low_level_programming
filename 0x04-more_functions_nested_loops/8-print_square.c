#include "main.h"

/**
 * print_SQuare -Prints n SQuares according n numbers of times
 * @size: The number of squares of squares/number of times
 * Return: empty
 */
void print_square(int size)
{
	int x, y;
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 1; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
	
