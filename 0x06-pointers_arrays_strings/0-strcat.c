#include "main.h"

/**
 * _strcat: a function to a concatenate two strings
 * @src: a variable to be added to *dest
 * @dest: a variable to store two variable after being combining them
 *
 * Return: returns *dest as a combined variable
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
