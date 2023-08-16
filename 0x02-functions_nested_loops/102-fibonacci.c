#include "stdio.h"
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, current, before_previous, next, previous;
	
	previous = 0;
	current = 1;
	before_previous = previous;

	for (i = 0; i < 50; i++)
	{
		next = previous + current;
		if (next < 0)
		{
			next = current + before_previous;
		}
		printf("%d, ", next);
		before_previous = previous;
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}
