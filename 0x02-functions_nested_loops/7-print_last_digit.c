#include "main.h"
/**
 *print_last_digit - get once digit place
 *@x: inputed number
 *Return: once digit
 */
int print_last_digit(int x)
{
	int d = -1;

	if(x < 0)
		x = x * d;
	return (x % 10);
}
