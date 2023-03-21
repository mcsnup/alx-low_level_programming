#include "main.h"

/**
 *_strlen - calculate the length of a string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
