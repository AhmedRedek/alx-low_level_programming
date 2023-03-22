#include "main.h"
/**
 * _isalpha - a function that checks for alpha character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
{

	if (_putchar (c + '0') >= 'a' && _putchar (c + '0') <= 'z' || _putchar (c + '0') >= 'A' && _putchar (c + '0') <= 'Z')
	       return (1);
	return (0);
}	
