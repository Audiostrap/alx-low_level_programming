#include "main.h"
/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: The correct output
 */
void more_numbers(void)
{
	int result;
	int repeat;

	for (repeat = 0; repeat <= 10; repeat++)
	{
		for (result = 0; result <= 14; result++)
		{
			if (result > 9)
			{
				_putchar((result / 10) + '0');
			}
		}
		_putchar((result % 10) + '0');
	}
	_putchar('\n');
}