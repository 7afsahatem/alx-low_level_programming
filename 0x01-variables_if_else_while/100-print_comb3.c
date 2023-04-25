#include <stdlib.h>

int putchar(int c); /* this is the declaration */

int main(void)
{
	int i, j;
	char *sep = ", "; /* this is a declaration and an initialization */

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(*sep); /* this prints the comma */
				putchar(*(sep + 1)); /* this prints the space */
			}
		}
	}
	putchar('\n');
	return (0);
}

