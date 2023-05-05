#include"main.h"
/*
 * reverse_array - a function reverses an array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp; // declare a temporary variable to store the value of a[i]

	for (i = 0; i < n/2; i++) // use n/2 as the limit
	{
		temp = a[i]; // store the value of a[i] in temp
		a[i] = a[n-i-1]; // swap a[i] and a[n-i-1]
		a[n-i-1] = temp; // assign temp to a[n-i-1]
	}
}
