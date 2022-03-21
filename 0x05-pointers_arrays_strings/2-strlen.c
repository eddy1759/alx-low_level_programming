#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: pointer of character
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
