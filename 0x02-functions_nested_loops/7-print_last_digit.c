#include "main.h"
/**
 *print_last_digit - get once digit place
 *@x: inputed number
 *Return: once digit
 */
int print_last_digit(int x)
{
	if(x < 0)
		-1 * x;
	return (x % 10);
}
