#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (p = m + 1; p < 10; p++)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + p);
				if (n != 7 || m != 8 || p != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

