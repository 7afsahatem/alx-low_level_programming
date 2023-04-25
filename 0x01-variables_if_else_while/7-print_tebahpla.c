#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';
	while (c >= 'a') // check the condition at the beginning of the loop
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
