#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9 
 * followed by a new line
 *
 * Return: 1 if successful
 */
void print_numbers(void)
{
	int result;
	
	for (result = 0; result <= 9; result++)
	{
		_putchar(result + '0');
	}
	_putchar('\n');
}
