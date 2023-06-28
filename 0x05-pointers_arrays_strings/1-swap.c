#include <stdio.h>

/**
 * swap_int - Swap he value of two integers.
 * @a: The first integer to be swapped
 * @b: The secound integer to be swapped
 * Return : nothing
 */

void swap_int(int *a, int *b)
/* The function that swap the valuebof two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
