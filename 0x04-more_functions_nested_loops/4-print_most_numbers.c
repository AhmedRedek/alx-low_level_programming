#include "main.h"
/**
 * print_most_numbers()
 *
 *
 *
 */
void print_most_numbers(void)
{
	int x;

	for (x = '1'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
