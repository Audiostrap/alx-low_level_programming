#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: prints correct output
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result = i * j;

			if (result < 10)
			{
				_putchar('0' + result);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
				_putchar(',');
			}
			if (j < 9)
			{
				_putchar(' ');
			}
			if (j > 10)
			{
				_putchar (' ');
			}
		}
		_putchar('\n');
	}
}
