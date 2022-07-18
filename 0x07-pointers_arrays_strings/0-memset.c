#include "main.h"
/**
* _memset - entry point
* @s: starting address
* @b: the value
* @n: the number of bytes
* Return: changed array
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
	s[i] = b;
	n--;
}
return (s);
}
