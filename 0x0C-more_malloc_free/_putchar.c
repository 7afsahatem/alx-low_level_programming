#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c:The character to prin
 * Return 1 if true, 0 if false
 * On error, -1 return.
 * Return: Alywas 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
