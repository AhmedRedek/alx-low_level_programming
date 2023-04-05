#include "main.h"


int _strlen_recursion(char *s)
{
	int counter;

	for (counter = 0; *s != '\n'; *s + 1)
		counter ++;
	return (counter);
}
