#include <stdio.h>

int main(void)
{
	int ch = 'z'; // initialize ch with the last lowercase letter
	while (ch >= 'a') // loop until ch reaches the first lowercase letter
	{
		putchar(ch); // write ch to stdout
		ch--; // decrement ch by one
	}
	putchar('\n'); // write a new line to stdout
	return (0);
}
