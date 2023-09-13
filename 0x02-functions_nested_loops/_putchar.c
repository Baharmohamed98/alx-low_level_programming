#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Returun: On success 1.
 * On error, -1 is returned, and errno is set apporpriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
