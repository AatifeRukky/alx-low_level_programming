#include "main.h"
/**
* print_last_digit - print the last digit
* @n: n is an int
* Descrpition: prints the last digit
* Return: intt
*/
int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
