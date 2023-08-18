#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 -9
 * followed by a new line but skips 2 and 4
 *
 *
 * Return: The result
 */
void print_most_numbers(void)
{
	int result;

	for (result = 0; result <= 9; result++)
	{
		if (result == 2 || result == 4)
		{
			continue;
		}
		_putchar(result + '0');
	}
	_putchar('\n');
}
