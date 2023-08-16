#include "stdio.h"
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, current, next, previous;
	previous = 0;
	current = 1;

	for (i = 0; i < 50; i++)
	{
		next = previous + current;
		if (next < 0)
		{
			next = previous + previous;
		}
		printf("%d, ", next);
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}
