#includen <unistd.h>

/**
 * _Putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set approistely.
 */
int _Putchar(char c)
{
	return (write(1, &c, 1));
}
