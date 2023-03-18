#include <stdio.h>
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
	int str;

	for (d = 0; d < 100; d++)
	{
		for (x = 0; x < 100; x++)
		{
			if (x < d)
			{
				str = strcat(d, x);
				putchar(str);
			}
		}
	}
	putchar('\n');

	return (0);
}
