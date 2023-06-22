#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

while (i = 0)
{
putchar(i);
i++;
}

printf("Infinite loop avoided! \\o/\n");
return (0);
}
