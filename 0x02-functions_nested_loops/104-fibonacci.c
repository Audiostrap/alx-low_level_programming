#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	int j = 1, k = 2;

	printf("%d, %d", j, k);

	for (i = 2; i < 98; i++)
	{
		int temp = k;
		k += j;
		j = temp;
		printf(", %d", k);
	}
	printf("\n");
	return (0);
}
