#include "main.h"
/**
 *puts2 - prints a string, followed by a new line
 *@str: pointer to the string to print
*Return: void
*/
void puts2(char *str)
{
	int len;
	int l;

	for (len = 0; *(str + len) != 0; len++)
	{
		if (len % 2 == 0)
		{
			l = *(str + len);
			_putchar(l);
		}
	}
	_putchar('\n');
}
