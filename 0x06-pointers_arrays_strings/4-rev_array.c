#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array of integers to be reversed
* @n: The number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= / 2; index--)
	{

		tmp = a[n - 1 - index];
	        a[n - 1 - index] = a[ondex];
		a[index] = tmp;
	}
}

