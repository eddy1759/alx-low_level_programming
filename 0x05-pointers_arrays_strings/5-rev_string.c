#include "main.h"
/**
 *rev_string - prints reversed string, followed by a new line
 *@s: pointer to the string to print
 *Return: void
*/
void rev_string(char *s)
{
	int len, i;
	char l;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	for (i = 0; i < len; i++)
	{
		l = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = l;
		len--;
	}
}
