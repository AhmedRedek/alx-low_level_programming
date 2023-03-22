#include "main.h"

/**
 * print_alphabet X 10 - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
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
