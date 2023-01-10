#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i)
}

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of first string
 *
 * Return: pointer to newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *dst;

	if (s1 == NULL)
		si = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + 1) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++
	}

	return (dst);
}
