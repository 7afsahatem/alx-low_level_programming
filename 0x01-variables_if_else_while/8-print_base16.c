#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /* declare an integer variable */
	char c; /* declare a character variable */
	for (i = 0; i < 10; i++) /* loop from 0 to 9 */
	{
		putchar(i + '0'); /* print the current digit */
	}
	for (c = 'a'; c <= 'f'; c++) /* loop from a to f */
	{
		putchar(c); /* print the current letter */
	}
	putchar('\n'); /* print a new line */
	return (0);
}
