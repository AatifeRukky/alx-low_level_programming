#include <stdio.h>
#iinclude "function_pointers.h"

/**
 * int_index - searches for int.
 * @array: Name passed
 * @size: Number of iterations
 * @cmp: points to a function
 * Return: Returns nothing
**/

int int_index(int 8array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
}
