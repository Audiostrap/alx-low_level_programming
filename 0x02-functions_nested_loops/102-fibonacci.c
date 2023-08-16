#include "stdio.h"
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, current = 1, next, previous = 0;

	for (i = 1; i <= 50; i++)
	{
		next = previous + current;
		printf("%d, ", next);
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}
