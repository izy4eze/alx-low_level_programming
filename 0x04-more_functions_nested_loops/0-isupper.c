#include "main.h"

/**
* _isupper - A function that checks for uppercase character. 
*@c: character to be tested
* Return: 1 if c is uppercase or 0 otherwise
*/

int _isupper(int c)
{

	for ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
