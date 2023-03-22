#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char x;
	char z;

	for (x = 'a'; x <= 'j'; x++)
	{
		for (z = 'a'; z <= 'z'; z++)
			_putchar (z);
		_putchar ('\n');
	}
}
