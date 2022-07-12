#include "main.h"
/**
* swap_int - swaps the values
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
