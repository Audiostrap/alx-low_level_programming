#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lower case followed by new line
 */
void print_alphabet_x10(void)
{
	char alphabet, letter;

	for (alphabet = 0; alphabet <= 10; alphabet++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	}
}
