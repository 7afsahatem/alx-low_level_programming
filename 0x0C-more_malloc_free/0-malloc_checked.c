#include "main.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b); /* allocate memory of size b */
	if (p == NULL) /* check if allocation failed */
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98); /* terminate process with status 98 */
	}
	return (p); /* return pointer to allocated memory */
}

