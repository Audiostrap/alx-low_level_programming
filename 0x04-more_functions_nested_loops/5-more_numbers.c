#include "main.h"
/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int x, result;

	for (x = 0; x < 10; x++)
	{
		for (result = 0; result <= 14; result++)
		{
			if (result > 9)
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}
