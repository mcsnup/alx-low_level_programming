#include <stdio.h>

/**
 * main - advance task 100
 * Return: always 0
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/*print tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*print ones digit*/
		{
			if(!((ones == tens) || (tens > ones)))/*eliminate repititions*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*add commas*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
