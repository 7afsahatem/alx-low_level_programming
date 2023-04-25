#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';
	
	while (c >= 'a') /* loop from z to a */
	{
		putchar(c); /* print the current character */
		c--; /* decrement the character */
	}
	putchar('\n'); /* print a new line */
	return (0);
}
