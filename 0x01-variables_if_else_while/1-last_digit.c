#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int ldigit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	printf("Last digit of %d is %d ", n, ldigit);
	if (ldigit > 5)
		printf("and is greater than 5\n");
	else if (ldigit == 0)
		printf("and is 0\n");
	else if (ldigit < 6 && ldigit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
