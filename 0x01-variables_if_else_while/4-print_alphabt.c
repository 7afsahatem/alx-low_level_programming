#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * Return: 0 if no error, non-zero value if error
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
