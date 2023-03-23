#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int x;
	if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
				if (x != 98)
				{
					printf (", ");
				}
		}
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf ("%d", x);
			if (x != 98)
				printf(", ");
		}
	}
	printf ("\n");
}
