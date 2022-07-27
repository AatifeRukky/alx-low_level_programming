#include "main.h"
#include <stdlib.h>
/**
 *create_array - main entry point
 *@size: size of an array
 *@c: char to initilize array with
 *
 *Return: NULL
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
	return (NULL);
}
arr = malloc(sizeof(char) * size);
/* check if malloc was succesful */
if (arr == NULL)
	return (NULL);
for (i = 0; i < size; i++)
{
	arr[i] = c;
}
return (arr);
}
