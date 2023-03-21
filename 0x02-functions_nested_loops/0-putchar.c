#include <stdlib.h>
#include <main.h>
#include <stdio.h>
/**
 * Print _putchar with new line
 *
 *
 *
 *
 * return 0
 *
 *
 **/

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	return 0;
}
