#include "main.h"
/**
 * main - check the code
 * prints alphabet in lowercase followed by new line
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}         
