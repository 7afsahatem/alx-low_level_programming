#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: 0 if no error, non-zero value if error
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
