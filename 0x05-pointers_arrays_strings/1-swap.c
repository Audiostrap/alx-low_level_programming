#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: pointer to an integer
 * @b: pointer to an integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
