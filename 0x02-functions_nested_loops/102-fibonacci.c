#include "stdio.h"
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, current, next, previous;
	
	previous = 1, current = 2, next;
	
	printf("%d, %d, ", previous, current);
	for (i = 2; i < 50; i++)
	{
		next = previous + current;
		printf("%d, ", next);
		if (i < 49)
		{
			printf(", ");
		}
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}
