#include "main.h"
/**
 *int _islower(int c) - Check lower case alphabet
 *
 *
 * Return 1 when true
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
		return 1;
	return 0;
}
