#include "main.h"


int _strlen_recursion(char *s)
{
	int counter;

	for (counter = 0; *s != '\n'; )
		counter ++;
	_strlen_recursion(s + 1);
	return (counter);
}
