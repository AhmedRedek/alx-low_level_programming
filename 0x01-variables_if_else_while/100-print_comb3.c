#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int x;

	for (d = 0; d < 100; d++)
	{
		for (x = 0; x < 100; x++)
		{
			if (x < d)
			{
				putchar(d);
				putchar(x);
					if(x != 9 && d != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');

	return (0);
}
