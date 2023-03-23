#include "main.h"
/**
 *print_last_digit - get once digit place
 *@x: inputed number
 *Return: once digit
 */
int print_last_digit(int x)
{
	x = x % 10;
	x = x * 11;
	return (x);
}
