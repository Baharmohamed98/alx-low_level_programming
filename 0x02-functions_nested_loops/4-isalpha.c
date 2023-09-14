#include "main.h"

/**
 * _isalpha - a function that checks for lowercase character.
 *
 * @c: the checked character.
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c >= 98) || (c >= 97 && c <= 122)) 
	{
	return (1);
	}
	return (0);
}
