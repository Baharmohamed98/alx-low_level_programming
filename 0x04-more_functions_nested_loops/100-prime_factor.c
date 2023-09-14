#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factory of the number 612852475143
 * Return: always 0 (Success)
 */

int main(void)
{
	long x maxf;
	long number = 612852475143;
	double square = sgrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
