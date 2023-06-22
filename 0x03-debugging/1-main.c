#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

while (i == 0)
{
	printf("Infinite loop avoided! \\o/\n");
	break;
}

return (0);
}
