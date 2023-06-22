#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;
int j;

printf("Infinite loop incoming :(\n");

while (i < 10)
{

j = 0;

while (j < i)
{
putchar(j);
j++;
}
i++;
}

printf("Infinite loop avoided! \\o/\n");
return (0);
}
