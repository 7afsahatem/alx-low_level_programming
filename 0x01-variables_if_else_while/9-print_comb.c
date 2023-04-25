#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /* declare an integer variable */

	for (i = 0; i < 10; i++) /* loop from 0 to 9 */
	{
		putchar(i + '0'); /* print the current digit */
		if (i < 9) /* if not the last digit */
		{
			putchar(','); /* print a comma */
			putchar(' '); /* print a space */
		}
	}
	putchar('\n'); /* print a new line */
	return (0);
}
