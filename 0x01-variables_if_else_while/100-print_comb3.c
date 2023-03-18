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

	for (d = 0; d <= 9; d++)
	{
		for (x = 0; x <=9; x++)
		{
			if (d <= x)
			{
				putchar(d + '0');
				putchar(x + '0');
			}
			if(x != 9 && d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
