#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if no error, non-zero value if error
 */
int main(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
