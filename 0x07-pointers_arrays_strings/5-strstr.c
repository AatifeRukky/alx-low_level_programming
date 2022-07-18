#include "main.h"
/**
* _strstr - main entry point
* @haystack: input
* @neeedle: input
* Return: always  0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *1 = haystack;
char *p = needle;
while (*1 == *p && *p != '\0')
{
	i++;
	p++;
}
if (*p == '\0'
)
return (haystack);
}
return (0);
}
