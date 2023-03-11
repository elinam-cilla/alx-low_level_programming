#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	/* Find the end of the destination string */
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy the source string to the end of the destination string */
	int j = 0;

	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	/* Add null terminator to the end of the concatenated string */
	dest[i] = '\0';

	/* Return pointer to destination string */
	return (dest);
}
