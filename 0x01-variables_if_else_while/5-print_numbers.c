#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
