#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: The number to be checked
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
	{
	lastDigit *= -1;
	}
	_putchar('0' + lastDigit);
	_putchar('\n');

	return (lastDigit);
}
