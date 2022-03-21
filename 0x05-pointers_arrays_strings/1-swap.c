#include "main.h"
/**
 *swap_int - swap the values of two integers
 *@a: pointer to a
 *@b: pointer to b
 *Return: Nothing
*/
void swap_int(int *a, int *b)
{

	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
