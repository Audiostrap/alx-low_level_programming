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
			
			_putchar('\n');
			
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
		}
}
}
