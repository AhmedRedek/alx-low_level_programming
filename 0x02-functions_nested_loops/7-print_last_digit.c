#include "main.h"
/**
 *print_last_digit - get once digit place
 *@x: inputed number
 *Return: once digit
 */
int print_last_digit(int x)
{
	int a;

	a = x % 10;

	if (a < 0)
		a = (-1 * a);
	_putchar (a + '0');
	return (a);
}
