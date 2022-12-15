#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int natural = 1024, sum = 0, c;

	for (c = 0; c < natural; c++)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
	}

	printf("%d\n", sum);
	return (0);
}
