#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changed.
 * Retur  A pointer to the changed string.
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if ( str[index] >= 'a' && str[index] <= 'z')
	index++;
	}
	return (str);
}
