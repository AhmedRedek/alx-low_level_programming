#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	char a;
	int x;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
			x = 1;
	}
	if (x == 1)
		return (1);
	return (0);
}
