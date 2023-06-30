#include "main.h"

/**
 * strin_toupper - function that changes all lowercase letters of a string to uppercase
 * @n: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
