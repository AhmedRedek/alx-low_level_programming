#include "main.h"
/**
 *print_sign - Prints number sign
 * @n: Print numbers
 * Return: 1 if positive number
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
