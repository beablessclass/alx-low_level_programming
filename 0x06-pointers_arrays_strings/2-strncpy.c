#include "main.h"

/**
 * _strncpy - copiessdadsdsstring
 * @dest: destinatiogsdfgn stsring
 * @src: source strsing
 * @n: number of bytxes tco copysd
 *
 * Return: pointer to theresulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
