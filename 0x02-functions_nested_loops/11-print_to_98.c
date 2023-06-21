#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: The character to be checked
 *
 * Return: 1 (success)
 */
void print_to_98(int n)
{
	int i = 0 + n;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{
			_putchar('0' + i);
		}
		else
		{
			_putchar('0' + i);
		}
		_putchar(',');
		_putchar(' ');
}
}
