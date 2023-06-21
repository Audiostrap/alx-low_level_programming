#include "main.h"
/**
 * print_sign - ptints the sign of a number
 * @n: The character to be checked
 *
 * Return: 1 and print + if n is greater than zero; 0 and print 0 if n is zero
 *  otherwise print' -'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
